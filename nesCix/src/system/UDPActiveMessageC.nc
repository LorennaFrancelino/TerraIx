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
	
	components UDPActiveMessageP;
	
	SplitControl = UDPActiveMessageP;
	AMSend = UDPActiveMessageP;
	Receive = UDPActiveMessageP;
	AMPacket = UDPActiveMessageP;
	Packet = UDPActiveMessageP;
	PacketAcknowledgements = UDPActiveMessageP;
		
}

