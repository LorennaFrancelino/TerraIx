configuration UDPActiveMessageC{
	
	provides {
		interface SplitControl;
		interface AMSend[am_id_t id];
		interface Receive[am_id_t id];
		interface AMPacket;
		interface Packet;
		interface PacketAcknowledgements;
	}
	
}
implementation{
	
	components UDPActiveMessageP, new TimerMilliC() as SD_Timer, new TimerMilliC() as TimerDelay;
	
	SplitControl = UDPActiveMessageP;
	AMSend = UDPActiveMessageP;
	Receive = UDPActiveMessageP;
	AMPacket = UDPActiveMessageP;
	Packet = UDPActiveMessageP;
	PacketAcknowledgements = UDPActiveMessageP; // provendo
	UDPActiveMessageP.sendDoneTimer->SD_Timer; // usando
	UDPActiveMessageP.timerDelay->TimerDelay;
}

