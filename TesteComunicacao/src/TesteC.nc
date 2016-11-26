#include "UDPActiveMessage.h"
#include "TesteCom.h"

module TesteC{
	
	uses{
		interface Boot;
		interface AMPacket;
		interface AMSend as UDPSender[am_id_t id];
		interface Receive as UDPReceiver[am_id_t id];
		interface SplitControl as UDPControl;
		interface Packet;
		interface PacketAcknowledgements;
	
		interface Timer as periodicTimer;
	}
	
}
implementation{	
	
	message_t msgT;
	bool status;
	SendToNodeMsg *sendToNode;
	am_id_t id = 2;

	event void Boot.booted(){
		// TODO Auto-generated method stub
		printf("booted.\n");
		call UDPControl.start();
	}
	
	// garantindo que só uma máquina está enviando mensagem
	event void UDPControl.startDone(error_t error){
		// TODO Auto-generated method stub
		//if (error == SUCCESS)
		if (TOS_NODE_ID == 56452) // quem vai enviar
				call periodicTimer.startPeriodic(5000);
	}
	
	event void periodicTimer.fired(){
	
		printf("Vou enviar.\n");
	
		sendToNode = (SendToNodeMsg*)(call Packet.getPayload(&msgT, sizeof(SendToNodeMsg)));
		if (sendToNode == NULL) {
			return;
		}
		sendToNode->nodeid = 1;//TOS_NODE_ID;
		sendToNode->counter = 1;
	
		// requisitar um ack - ativa o ack
		call PacketAcknowledgements.requestAck(&msgT);
	
		status = call UDPSender.send[id](AM_BROADCAST_ADDR, &msgT, sizeof(SendToNodeMsg)); // 56450 ou 56451 ou AM_BROADCAST_ADDR
		if(status != SUCCESS) {
			printf("Status: %d\n", status);
	
		}
		else
			printf("Dei o send\n");
	}

	event void UDPSender.sendDone[am_id_t id](message_t *msg, error_t error){
		// TODO Auto-generated method stub
	
		printf("UDPSender.sendDone: %d\n", error);
	}

	event message_t * UDPReceiver.receive[am_id_t id](message_t *msg, void *payload, uint8_t len){
		// TODO Auto-generated method stub
	
		SendToNodeMsg* dataReceived = payload;
		printf(" NodeId %d, Counter %d\n", dataReceived->nodeid, dataReceived->counter);
		return msg;
	}


	event void UDPControl.stopDone(error_t error){
		// TODO Auto-generated method stub
	}
}