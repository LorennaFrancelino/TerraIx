configuration TerraActiveMessageC{

  provides {
    interface SplitControl;
    interface AMSend[am_id_t id];
    interface Receive[am_id_t id];
    interface Packet;
    interface AMPacket;
    interface PacketAcknowledgements;
    interface Receive as Snoop[am_id_t id];
    interface LowPowerListening;
    interface AMAux;
  }
}
implementation{
#ifdef NRF24
	components NRF24ActiveMessageC as AM;
#elif defined(NO_RADIO)
	components SerialActiveMessageC as AM;
#elif defined(XBEE0)

#elif defined(XBEE1)
	
#endif

	SplitControl = AM;
  
	AMSend       = AM;
	Receive      = AM.Receive;
	Packet       = AM;
	AMPacket     = AM;
	PacketAcknowledgements = AM;
#ifndef NO_RADIO
	Snoop        = AM.Snoop;
	LowPowerListening = AM;
	AMAux		= AM;
#else
	components SerialAuxDummyP as Dummy;
	Snoop        = Dummy.Snoop;
	LowPowerListening = Dummy;
	AMAux		= Dummy;
#endif
  
}