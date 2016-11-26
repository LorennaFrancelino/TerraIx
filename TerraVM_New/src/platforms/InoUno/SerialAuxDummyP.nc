module SerialAuxDummyP{

provides{
    interface Receive as Snoop[am_id_t id];
    interface LowPowerListening;
    interface AMAux;
	}
}
implementation{

	command uint16_t LowPowerListening.getLocalWakeupInterval(){
		// TODO Auto-generated method stub
	}

	command void LowPowerListening.setLocalWakeupInterval(uint16_t intervalMs){
		// TODO Auto-generated method stub
	}

	command uint16_t LowPowerListening.getRemoteWakeupInterval(message_t *msg){
		// TODO Auto-generated method stub
	}

	command void LowPowerListening.setRemoteWakeupInterval(message_t *msg, uint16_t intervalMs){
		// TODO Auto-generated method stub
	}

	command void AMAux.setPower(message_t *p_msg, uint8_t power){
		// TODO Auto-generated method stub
	}

	command uint8_t AMAux.getPower(message_t *p_msg){
		// TODO Auto-generated method stub
	}
}