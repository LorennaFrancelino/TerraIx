
/*------------------------------------------------------- globais --------------------------------------------------------*/

#define MAX_LENGTH 256
#define PORT 5000
#define GROUP "224.0.0.1"
#define INTERFACE "192.168.10.131"

int socket_sender;

int socket_receiver;



/*------------------------------------------------- handle receiver --------------------------------------------------------*/


void UDP_HandleReceiver(int signum)
{
    	char dgram[MAX_LENGTH];
    	struct sockaddr_in addr;
    	int fromlen = sizeof(addr);

	int size = recvfrom(socket_receiver, dgram, MAX_LENGTH, 0, (struct sockaddr*)&addr, (socklen_t*)&fromlen);

	if (size < 0) printf("Erro recvfrom"); // incluir o signal do receive()
	else{
	    dgram[size]='\0';
		
	}
// checar o message_t recebido antes de dar o signal
// verifica se a mensagem é pra mim (através do TOS_NODE_ID
// broadcast ou meu id -> ok, caso contrário -> not ok

// fazer post do signal de receiver

// avaliar a possibilidade de fazer um buffer cíclico
}

/*------------------------------------------------------- start --------------------------------------------------------*/


    socket_receiver = socket(AF_INET, SOCK_DGRAM, 0);
    if(fd < 0) {
        // return -1; return error_t
    }

    const unsigned int reuse = 1;
    if(setsockopt(socket_receiver, SOL_SOCKET, SO_REUSEADDR, &reuse, sizeof(reuse)) < 0) {
        close(socket_receiver);
        //return -1;
    }

    if(fcntl(socket_receiver, F_SETFL, O_NONBLOCK) < 0) {
        close(socket_receiver);
        //return -1;
    }

    struct sockaddr_in addr;
    memset((char*)&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    addr.sin_addr.s_addr =  INADDR_ANY;
    if(bind(socket_receiver, (struct sockaddr*)&addr, sizeof(addr))) {
        close(socket_receiver);
        //return -1;
    }

    struct ip_mreq mcast_group;
    mcast_group.imr_multiaddr.s_addr = inet_addr(group);
    mcast_group.imr_interface.s_addr = INADDR_ANY; //inet_addr(interface);
    if(setsockopt(socket_receiver, IPPROTO_IP, IP_ADD_MEMBERSHIP, (char*)&mcast_group, sizeof(mcast_group))) {
        close(socket_receiver);
        //return -1;
    }


    pid_t pid = getpid();

    int a_flags = fcntl(a_fd, F_GETFL);
    fcntl(a_fd, F_SETFL, a_flags | O_ASYNC);

    struct sigaction a_sa;
    a_sa.sa_flags = 0;
    a_sa.sa_handler = a_handler;
    sigemptyset(&a_sa.sa_mask);


/*------------------------------------------------------- stop --------------------------------------------------------*/

    close(socket_sender);
    close(socket_receiver);


/*------------------------------------------------------- send --------------------------------------------------------*/

    
    struct sockaddr_in addr;
    char send_data[MAX_lENGTH];

    memset((char*)&addr, 0, sizeof(addr));
    addr.sin_addr.s_addr = inet_addr(GROUP);
    addr.sin_family = AF_INET;
    addr.sin_port = htons(PORT);


    const unsigned int zero = 0;
    const unsigned int one = 1;

    socket_sender = socket(AF_INET, SOCK_DGRAM, 0);
    if(socket_sender < 0) {
        //return -1;
    }

    if(setsockopt(socket_sender, SOL_SOCKET, SO_REUSEADDR, &one, sizeof(unsigned int)) < 0) {
        close(socket_sender);
        //return -1;
    }

    if(setsockopt(socket_sender, IPPROTO_IP, IP_MULTICAST_LOOP, &zero, sizeof(unsigned int)) < 0) {
        close(socket_sender);
        //return -1;
    }

    struct ip_mreq mcast_group;
    mcast_group.imr_multiaddr.s_addr = inet_addr(group);
    mcast_group.imr_interface.s_addr = INADDR_ANY; //inet_addr(interface);
    if(setsockopt(socket_sender, IPPROTO_IP, IP_ADD_MEMBERSHIP, (char*)&mcast_group, sizeof(mcast_group))) {
        close(socket_sender);
        //return -1;
    }

// tenho que preencher o message_t
    send_data[0]=0;
    fgets(send_data, MAX_LENGTH, stdin);
    if(strlen(send_data) > 0)
	sendto(send_fd, send_data, strlen(send_data), 0, (struct sockaddr *)&addr, sizeof(struct sockaddr_in));
    

