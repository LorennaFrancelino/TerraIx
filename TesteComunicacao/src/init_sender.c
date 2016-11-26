#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int init_client_fd(int port, const char* group, const char* interface)
{
    const unsigned int zero = 0;
    const unsigned int one = 1;

    int fd = socket(AF_INET, SOCK_DGRAM, 0);
    if(fd < 0) {
        return -1;
    }

    if(setsockopt(fd, SOL_SOCKET, SO_REUSEADDR, &one, sizeof(unsigned int)) < 0) {
        close(fd);
        return -1;
    }

    if(setsockopt(fd, IPPROTO_IP, IP_MULTICAST_LOOP, &zero, sizeof(unsigned int)) < 0) {
        close(fd);
        return -1;
    }
/*
    if(setsockopt(fd, IPPROTO_IP, IP_MULTICAST_TTL, &one, sizeof(unsigned char)) < 0) {
        close(fd);
        return -1;
    }
*/
    struct ip_mreq mcast_group;
    mcast_group.imr_multiaddr.s_addr = inet_addr(group);
    mcast_group.imr_interface.s_addr = INADDR_ANY; //inet_addr(interface);
    if(setsockopt(fd, IPPROTO_IP, IP_ADD_MEMBERSHIP, (char*)&mcast_group, sizeof(mcast_group))) {
        close(fd);
        return -1;
    }

    return fd;
}
