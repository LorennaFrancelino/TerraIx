configuration TerraDApp{
}
implementation{
	components TerraDC,  MainC, UDPActiveMessageC as UDP, new TimerMilliC() as Timer;
	
	TerraDC.Boot->MainC;
	TerraDC.AMPacket->UDP;	
	TerraDC.UDPSender->UDP;	
	TerraDC.Packet->UDP;	
	TerraDC.UDPReceiver->UDP.Receive;
	TerraDC.UDPControl->UDP;
	TerraDC.PacketAcknowledgements->UDP;
	TerraDC.periodicTimer->Timer;
	
}