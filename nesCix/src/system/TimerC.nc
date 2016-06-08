#include <hardware.h>

configuration TimerC{
	provides interface Timer; // colocar millisegundos
	provides interface Init;
}
implementation{
	
	components TimerP;	
	
	Init = TimerP;
	Timer = TimerP;
	
}