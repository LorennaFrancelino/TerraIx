#ifndef MESSAGE_H
#define MESSAGE_H

#include "platform_message.h"

#ifndef TOSH_DATA_LENGTH
#define TOSH_DATA_LENGTH 28
#endif

#ifndef TOS_BCAST_ADDR
#define TOS_BCAST_ADDR 0xFFFF
#endif

#define ACK_CODE 0xFFFE

typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t)];
  nx_uint8_t data[TOSH_DATA_LENGTH];
  nx_uint8_t footer[sizeof(message_footer_t)];
  nx_uint8_t metadata[sizeof(message_metadata_t)];
} message_t;

typedef nx_struct ackMessage_t{	
	nx_uint16_t ackCode;
	nx_am_addr_t src;
	nx_am_addr_t dest;
	nx_uint16_t ackID;	
}ackMessage_t;

/*
 * This resource is used to arbitrate access between ActiveMessageC,
 * Ieee154MessageC and possibly future MessageC components to the 
 * underlying radio driver.
 */
#define RADIO_SEND_RESOURCE "RADIO_SEND_RESOURCE"

#endif /* MESSAGE_H */
