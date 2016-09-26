#ifndef UDPACTIVE_MESSAGE_H
#define UDPACTIVE_MESSAGE_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <ifaddrs.h>
#include <stdlib.h>
#include <errno.h>

#define MAX_LENGTH 256
#define PORT 5000
#define GROUP "224.0.0.1"
#define INTERFACE "192.168.10.131"

int socket_sender;
int socket_receiver;

#endif /* UDPACTIVE_MESSAGE_H */
