interface Timer
{
  // basic interface
  command void startPeriodic( uint32_t dt );
  command void startOneShot( uint32_t dt );
  command void stop();
  event void fired();

  // extended interface
  command bool isRunning();
  command bool isOneShot();
  command void startPeriodicAt( uint32_t t0, uint32_t dt );
  command void startOneShotAt( uint32_t t0, uint32_t dt );
  command uint32_t getNow();
  command uint32_t gett0();
  command uint32_t getdt();
}
