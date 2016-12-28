#include<stdio.h>
#include<stdlib.h>
#include "BasicServices.h"

#define LINE_SIZE 1000

module TerraDC{
	
	uses { 
		interface Boot;
		interface AMPacket;
		interface AMSend as UDPSender[am_id_t id];
		interface Receive as UDPReceiver[am_id_t id];
		interface SplitControl as UDPControl;
		interface Packet;
		interface PacketAcknowledgements;
	
		interface Timer<TMilli> as periodicTimer;
	}
	
}
implementation{
	
	message_t sendMessage;
	FILE *file;
	newProgVersion_t newProgVersion;
	
	nx_uint8_t line[LINE_SIZE];
	nx_uint8_t blocks[CURRENT_MAX_BLOCKS][BLOCK_SIZE];
	
	int j=-1, k=0;
	int start,end,tracks,wClocks,asyncs,wClock0,gate0,inEvts,async0;
	
	uint16_t Addr=0;
	uint16_t blockId = 0;
	uint16_t localVersionId = 2;
	
	void ReadVMXFile(char* file_name){
		dbg(APPNAME, "ReadVMXFile.\n");
		file = fopen(file_name, "r");
		if (file == NULL)
			exit(EXIT_FAILURE);			
	
		// populando a estrutura com a primeira linha
		fscanf(file, "%d%d%d%d%d%d%d%d%d", &start, &end, &tracks, &wClocks, &asyncs, &wClock0, 
				&gate0, &inEvts, &async0);
	
		newProgVersion.versionId = (nx_uint16_t) localVersionId;
		newProgVersion.blockStart = (nx_uint16_t) start/BLOCK_SIZE;
		newProgVersion.blockLen = (nx_uint16_t) (end/BLOCK_SIZE)+1-(newProgVersion.blockStart);
		
		newProgVersion.startProg = (nx_uint16_t) start;
		newProgVersion.endProg = (nx_uint16_t) end;
		newProgVersion.nTracks = (nx_uint16_t) tracks; 
		newProgVersion.wClocks = (nx_uint16_t) wClocks;
		newProgVersion.asyncs = (nx_uint16_t) asyncs;
		newProgVersion.wClock0 = (nx_uint16_t) wClock0;
		newProgVersion.gate0 = (nx_uint16_t) gate0;
		newProgVersion.inEvts = (nx_uint16_t) inEvts;
		newProgVersion.async0 = (nx_uint16_t) async0;
	
		while(fgets(line,LINE_SIZE,file) != NULL){
			if (j>=0){ // ignores first line
				if(k<BLOCK_SIZE){
					sscanf(line, "%x\n", &blocks[blockId][k]);
					//printf("%2x\n", blocks[blockId][k]);// ok
				}
				k++;
			}
			j++;
			if (k==BLOCK_SIZE){
				blockId++;
				j=0;
				k=0;
			}
		}
		fclose(file);
		if(k<BLOCK_SIZE && k!=0){ // if the last block doesn't have 24 bytes
			// complete with zeros
			while(k<BLOCK_SIZE){
				blocks[blockId][k] = 0;
				k++;
			}
		}	
	}

	event void Boot.booted(){
		// TODO Auto-generated method stub
		ReadVMXFile("/home/wsn/git/TerraIx/terrac/samples/TesteIx.vmx");
	
		call UDPControl.start();
	}
	
	event void UDPControl.startDone(error_t error){
		error_t stat;	
	
		// TODO Auto-generated method stub
		memcpy(call Packet.getPayload(&sendMessage, call Packet.maxPayloadLength()), &newProgVersion, sizeof(newProgVersion_t));
		dbg(APPNAME, "UDP::UDPSender(): maxSize=%d\n", call Packet.maxPayloadLength());
		stat =  call UDPSender.send[AM_NEWPROGVERSION](AM_BROADCAST_ADDR, &sendMessage, sizeof(newProgVersion_t));
	}

	event void UDPSender.sendDone[am_id_t id](message_t *msg, error_t error){
		// TODO Auto-generated method stub
	}

	event message_t * UDPReceiver.receive[am_id_t id](message_t *msg, void *payload, uint8_t len){
		// TODO Auto-generated method stub
		newProgBlock_t* newProgBlock;
		dbg(APPNAME, "UDPReceiver::receive(): msg=%d, am_id=%d\n", call AMPacket.source(&msg), id);
		if (id == AM_REQPROGBLOCK)
		{
			reqProgBlock_t* reqMsg = payload;
			dbg(APPNAME, "UDPReceiver::receive(): reqOper=%d, versionId=%d, blockId=%d, localVersionId=%d\n", reqMsg->reqOper, reqMsg->versionId, reqMsg->blockId, localVersionId);
			if (localVersionId == reqMsg->versionId){
				newProgBlock = call Packet.getPayload(&sendMessage, call Packet.maxPayloadLength());
				
				newProgBlock->versionId = localVersionId;
				newProgBlock->blockId = reqMsg->blockId;
				memcpy(newProgBlock->data, blocks[reqMsg->blockId], BLOCK_SIZE);
				call UDPSender.send[AM_NEWPROGBLOCK](AM_BROADCAST_ADDR, &sendMessage, sizeof(newProgBlock_t));
				
				dbg(APPNAME, "UDPReceiver::receive(): ENVIOU\n");
			
			}
		}	
		return msg;
	}

	event void periodicTimer.fired(){
		// TODO Auto-generated method stub
	}

	event void UDPControl.stopDone(error_t error){
		// TODO Auto-generated method stub
	}
}