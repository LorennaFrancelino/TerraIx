/***********************************************
 * TerraVM - Terra virtual machine project
 * March, 2014
 * Author: A.Branco
 * abranco at inf.puc-rio.br
 * *********************************************/
/*
 * Configuration: BasicServicesC
 * Basic Services - Main VM Timer, Simple Radio, and Code Upload/Forwarder
 * 
 */
 
#include "BasicServices.h"
 
configuration BasicServicesC{
	provides interface Boot as BSBoot;
	provides interface BSTimer as BSTimerVM;
	provides interface BSTimer as BSTimerAsync;
	provides interface BSUpload;
	provides interface BSRadio;
}
implementation{
	components MainC;
    BS.TOSBoot  -> MainC;
    
/*******************************************
 * Basic Service components
 *******************************************/
	components BasicServicesP as BS;
   	// Provided interfaces wire
   	BSBoot = BS.BSBoot;	
	BSTimerVM = BS.BSTimerVM;
	BSTimerAsync = BS.BSTimerAsync;
	BSUpload = BS.BSUpload;
	BSRadio = BS.BSRadio;

	components TerraActiveMessageC as AMDriver;
	BS.RadioControl -> AMDriver.SplitControl;
	BS.RadioAMPacket -> AMDriver;
	BS.RadioPacket -> AMDriver.Packet;
	BS.RadioAck -> AMDriver.PacketAcknowledgements;
 	BS.RadioSender -> AMDriver.AMSend;
	BS.AMAux -> AMDriver;
#ifdef LPL_ON
	BS.LowPowerListening -> AMDriver.LowPowerListening;
#endif
	BS.RadioReceiver -> AMDriver.Receive;
	
#ifdef MODULE_CTP
	components CollectionC as Collector;
	BS.RoutingControl -> Collector;
	BS.RootControl -> Collector;
	BS.CtpInfo -> Collector;
	BS.recSendBS -> Collector.Receive[AM_SENDBS];
	components new CollectionSenderC(AM_SENDBS) as sendBS;
	BS.sendBSNet -> sendBS;
#endif

	
	// setData queue - only NEW_DATA_LIST_SIZE last updates
#ifdef MODE_SETDATA
	components new dataQueueC(setDataBuff_t,SET_DATA_LIST_SIZE*2,(char)unique("dataQueueC")) as setDataQueue;
	BS.setDataQ -> setDataQueue;
#endif
	// Bit vector to control memory blocks
	components new vmBitVectorC(CURRENT_MAX_BLOCKS) as Bitmap;
	BS.BM -> Bitmap;	
	
	// IN & OUT Queues
#define  MSG_IN_QSIZE IN_QSIZE
#define  MSG_OUT_QSIZE OUT_QSIZE
	components new dataQueueC(GenericData_t,MSG_IN_QSIZE,(char)unique("dataQueueC")) as inQueue;
	components new dataQueueC(GenericData_t,MSG_OUT_QSIZE,(char)unique("dataQueueC")) as outQueue;
	BS.inQ -> inQueue;
	BS.outQ -> outQueue;	


	// Timers
	components new TimerMilliC() as TimerVM;	
	components new TimerMilliC() as TimerAsync;	
	components new TimerMilliC() as sendTimer;	
	components new TimerMilliC() as ProgReqTimer;	
	components new TimerMilliC() as SendDataFullTimer;	
	components new TimerMilliC() as DataReqTimer;	
	BS.TimerVM -> TimerVM;	
	BS.TimerAsync -> TimerAsync;	
	BS.sendTimer -> sendTimer;	
	BS.ProgReqTimer -> ProgReqTimer;
	BS.SendDataFullTimer -> SendDataFullTimer;
#ifdef MODE_SETDATA
	BS.DataReqTimer -> DataReqTimer;
#endif
	components RandomC;
	BS.Random -> RandomC;
	
#ifdef WITH_BSTATION
	components SerialActiveMessageC as SerialAM;
	BS.SerialControl -> SerialAM.SplitControl;
	BS.SerialSender -> SerialAM.AMSend;
	BS.SerialReceiver -> SerialAM.Receive;
	BS.SerialPacket -> SerialAM.Packet;
#endif


}