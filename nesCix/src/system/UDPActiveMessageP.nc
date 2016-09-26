#include "UDPActiveMessage.h"

module UDPActiveMessageP{
	
	provides{		
		interface SplitControl;
		interface AMSend[am_id_t id];
		interface Receive[am_id_t id];
		interface AMPacket;
		interface Packet;
		interface PacketAcknowledgements;
		//    interface PacketAcknowledgements;
		//    interface SendNotifier[am_id_t amId];
	
	}
	
}
implementation{	

	uint16_t getID_fromIP(){
	
		struct ifaddrs *ifaddr, *ifa;
			int family, s;
		char host[NI_MAXHOST];
		uint16_t addrHost[4];

		if (getifaddrs(&ifaddr) == -1) {
			perror("getifaddrs");
			exit(EXIT_FAILURE);
		}

		/* Walk through linked list, maintaining head pointer so we
		can free list later */

		for (ifa = ifaddr; ifa != NULL; ifa = ifa->ifa_next) {
			if (ifa->ifa_addr == NULL)
				continue;
	
			family = ifa->ifa_addr->sa_family;
	
			if (family == AF_INET){
				s = getnameinfo(ifa->ifa_addr, sizeof(struct sockaddr_in), host, NI_MAXHOST, NULL, 0, NI_NUMERICHOST);
				if (s != 0) {
					printf("getnameinfo() failed: %s\n", gai_strerror(s));
					exit(EXIT_FAILURE);
				}
	
				sscanf(host, "%d.%d.%d.%d", &addrHost[0], &addrHost[1], &addrHost[2], &addrHost[3]);
	
				if (addrHost[0] != 127) return (addrHost[2]*256 + addrHost[3]);
	
				//printf("%d %d %d %d - %d\n", addrHost[0], addrHost[1], addrHost[2], addrHost[3], addrHost[2]*256 + addrHost[3]);
			}
		}
		return 0;
	}

	void UDP_HandleReceiver(int signum)
	{
		char dgram[MAX_LENGTH];
		struct sockaddr_in addr;
		int fromlen = sizeof(addr);
		message_t *msg;
		int size;
		struct sockaddr *addrRcv;
		struct socklen_t *addRcvLen;
	
		printf("udp_handler\n");
		size = recvfrom(socket_receiver, dgram, MAX_LENGTH, 0, (struct sockaddr*)&addr, (socklen_t*)&fromlen);

		if (size < 0) printf("Erro recvfrom"); // incluir o signal do receive()
		else{
				dgram[size]='\0';
	
		}
	
		msg = (message_t*) dgram;
		printf("Message: \n %d", call AMPacket.source(msg));
		// checar o message_t recebido antes de dar o signal
		// verifica se a mensagem é pra mim (através do TOS_NODE_ID
		// broadcast ou meu id -> ok, caso contrário -> not ok

		// fazer post do signal de receiver

		// avaliar a possibilidade de fazer um buffer cíclico
		/*
		if (getsockname(socket_receiver, &addrRcv, &addrRcv) == 0)
		{
		printf(addrRcv->in_add.s);
		}	
		 */	
	}
	
	serial_header_t* ONE getHeader(message_t* ONE msg) {
		return TCAST(serial_header_t* ONE, (uint8_t*)msg + offsetof(message_t, data) - sizeof(serial_header_t));
	}	

	task void start_done(){
		signal SplitControl.startDone(SUCCESS);
	}

	command error_t SplitControl.start(){
		// TODO Auto-generated method stub
		const unsigned int reuse = 1;
		struct sockaddr_in addr;
		struct ip_mreq mcast_group;
		pid_t pid;
		int a_flags;
		struct sigaction a_sa;
	
		TOS_NODE_ID = getID_fromIP();
		if(TOS_NODE_ID == 0){
			printf("Nenhuma interface ethernet AF_INET foi encontrada\n");
			return FAIL;
		}
		printf("Meu am_id: %d\n", TOS_NODE_ID);
	
		socket_receiver = socket(AF_INET, SOCK_DGRAM, 0);
		if(socket_receiver < 0) {
			return FAIL;
		}
	
		if(setsockopt(socket_receiver, SOL_SOCKET, SO_REUSEADDR, &reuse, sizeof(reuse)) < 0) {
			close(socket_receiver);
			return FAIL;
		}

		if(fcntl(socket_receiver, F_SETFL, O_NONBLOCK) < 0) {
			close(socket_receiver);
			return FAIL;
		}

		memset((char*)&addr, 0, sizeof(addr));
		addr.sin_family = AF_INET;
		addr.sin_port = htons(PORT);
		addr.sin_addr.s_addr =  INADDR_ANY;
		if(bind(socket_receiver, (struct sockaddr*)&addr, sizeof(addr))) {
			close(socket_receiver);
			return FAIL;
		}

		mcast_group.imr_multiaddr.s_addr = inet_addr(GROUP);
		mcast_group.imr_interface.s_addr = INADDR_ANY; //inet_addr(interface);
		if(setsockopt(socket_receiver, IPPROTO_IP, IP_ADD_MEMBERSHIP, (char*)&mcast_group, sizeof(mcast_group))) {
			close(socket_receiver);
			return FAIL;
		}

		pid = getpid();

		a_flags = fcntl(socket_receiver, F_GETFL);
		fcntl(socket_receiver, F_SETFL, a_flags | O_ASYNC);

		a_sa.sa_flags = 0;
		a_sa.sa_handler = UDP_HandleReceiver;
		sigemptyset(&a_sa.sa_mask);
	
		sigaction(SIGIO, &a_sa, NULL);
		fcntl(socket_receiver, F_SETOWN, pid);
	
		printf("START - pid: %d\n", pid);
	
		post start_done();
	
		return SUCCESS;
	}
	
	task void send_done(){
		// preciso colocar como variável global pra poder fazer aqui na task
		//signal AMSend.sendDone[am_id_t id](message_t *msg, error_t error);
	
		printf("sendDone\n");
	}

	command error_t AMSend.send[am_id_t id](am_addr_t am_addr, message_t *msg, uint8_t len){
		// TODO Auto-generated method stub

		const unsigned int zero = 0;
		const unsigned int one = 1;
		struct sockaddr_in addr;
		struct ip_mreq mcast_group;
		message_header_t *header;
		int status;

		memset((char*)&addr, 0, sizeof(addr));
		addr.sin_addr.s_addr = inet_addr(GROUP);
		addr.sin_family = AF_INET;
		addr.sin_port = htons(PORT);
	
	
		socket_sender = socket(AF_INET, SOCK_DGRAM, 0);
		if(socket_sender < 0) {
			printf("socket\n");
			return FAIL;
		}

		if(setsockopt(socket_sender, SOL_SOCKET, SO_REUSEADDR, &one, sizeof(unsigned int)) < 0) {
			close(socket_sender);
			printf("setsockopt 1\n");
			return FAIL;
		}

		if(setsockopt(socket_sender, IPPROTO_IP, IP_MULTICAST_LOOP, &zero, sizeof(unsigned int)) < 0) {
			close(socket_sender);
			printf("setsockopt 2\n");
			return FAIL;
		}

		mcast_group.imr_multiaddr.s_addr = inet_addr(GROUP);
		mcast_group.imr_interface.s_addr = INADDR_ANY; //inet_addr(interface);
		status = setsockopt(socket_sender, IPPROTO_IP, IP_ADD_MEMBERSHIP, (char*)&mcast_group, sizeof(mcast_group));
		if(status) {
			printf("setsockopt 3 Erro: %d Devido a falta de conexão com a interface \n", errno);
			close(socket_sender);
			return FAIL;
		}
	
		call AMPacket.setSource(msg, TOS_NODE_ID);
		call AMPacket.setDestination(msg, am_addr);
		call AMPacket.setGroup(msg, TOS_AM_GROUP);
		call AMPacket.setType(msg, id);
		// está faltando o len
	
		sendto(socket_sender, msg, sizeof(message_t), 0, (struct sockaddr *)&addr, sizeof(struct sockaddr_in));
	
		printf("Passei do sendTo\n");	
 
		signal AMSend.sendDone[id](msg, SUCCESS);
	
		return SUCCESS;		
	}

	command error_t AMSend.cancel[am_id_t id](message_t *msg){
		// TODO Auto-generated method stub
		return SUCCESS;
	}

	command uint8_t AMSend.maxPayloadLength[am_id_t id](){
		// TODO Auto-generated method stub
		return 0;
	}

	command void * AMSend.getPayload[am_id_t id](message_t *msg, uint8_t len){
		// TODO Auto-generated method stub
		printf("GetPayload");
		return msg->data;
	}

	command bool AMPacket.isForMe(message_t *amsg){
		// TODO Auto-generated method stub
		return FALSE;
	}

	command void AMPacket.setSource(message_t *amsg, am_addr_t addr){
		// TODO Auto-generated method stub
		serial_header_t* header = getHeader(amsg);
    	header->src = addr;
	}

	command void AMPacket.setType(message_t *amsg, am_id_t t){
		// TODO Auto-generated method stub
		serial_header_t* header = getHeader(amsg);
    	header->type = t;
	}

	command am_id_t AMPacket.type(message_t *amsg){
		// TODO Auto-generated method stub
		return 0;
	}

	command am_addr_t AMPacket.destination(message_t *amsg){
		// TODO Auto-generated method stub
		return 0;
	}

	command am_addr_t AMPacket.address(){
		// TODO Auto-generated method stub
		return 0;
	}

	command void AMPacket.setDestination(message_t *amsg, am_addr_t addr){
		// TODO Auto-generated method stub
	}

	command am_addr_t AMPacket.source(message_t *amsg){
		// TODO Auto-generated method stub
		return 0;
	}

	command void AMPacket.setGroup(message_t *amsg, am_group_t grp){
		// TODO Auto-generated method stub
		serial_header_t* header = getHeader(amsg);
   		header->group = grp;
	}

	command am_group_t AMPacket.group(message_t *amsg){
		// TODO Auto-generated method stub
		serial_header_t* header = getHeader(amsg);
    	return header->group;
	}

	command am_group_t AMPacket.localGroup(){
		// TODO Auto-generated method stub
		return TOS_AM_GROUP;
	}

	command void Packet.setPayloadLength(message_t *msg, uint8_t len){
		// TODO Auto-generated method stub
	}

	command uint8_t Packet.payloadLength(message_t *msg){
		// TODO Auto-generated method stub		
		serial_header_t* header = getHeader(msg); 		
		return header->length;
	}

	command void * Packet.getPayload(message_t *msg, uint8_t len){
		// TODO Auto-generated method stub
		return msg->data;
	}

	command uint8_t Packet.maxPayloadLength(){
		// TODO Auto-generated method stub
		return TOSH_DATA_LENGTH;;
	}

	command void Packet.clear(message_t *msg){
		// TODO Auto-generated method stub
	}

	command error_t SplitControl.stop(){
		// TODO Auto-generated method stub
	
		close(socket_sender);
		close(socket_receiver);
	
		return SUCCESS;
	}

	async command bool PacketAcknowledgements.wasAcked(message_t *msg){
		// TODO Auto-generated method stub
		return FALSE;
	}

	async command error_t PacketAcknowledgements.requestAck(message_t *msg){
		// TODO Auto-generated method stub
		return SUCCESS;
	}

	async command error_t PacketAcknowledgements.noAck(message_t *msg){
		// TODO Auto-generated method stub
		return SUCCESS;
	}
}