#ifndef TESTE_COM_H
#define TESTE_COM_H

enum {
  AM_SENDTONODE = 6,
  TIMER_PERIOD_MILLI = 250
};

typedef nx_struct SendToNodeMsg {
  nx_uint16_t nodeid;
  nx_uint16_t counter;
} SendToNodeMsg;

#define AM_ID_T 2 

#endif /* TESTE_COM_H */
