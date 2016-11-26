#include "TesteCom.h"

configuration TesteComAppC{
	
}
implementation{
	
	components TesteC,  MainC, UDPActiveMessageC as UDP, new TimerMilliC() as Timer;
	
	TesteC.Boot->MainC;
	TesteC.AMPacket->UDP;	
	TesteC.UDPSender->UDP;	
	TesteC.Packet->UDP;	
	TesteC.UDPReceiver->UDP;
	TesteC.UDPControl->UDP;
	TesteC.PacketAcknowledgements->UDP;
	TesteC.periodicTimer->Timer;
	
}