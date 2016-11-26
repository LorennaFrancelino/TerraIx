#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define MAX_LENGTH 256
#define PORT 5000
#define GROUP "224.0.0.1"
#define INTERFACE "192.168.10.131"


int init_fd(int port, const char* group, const char* interface)
{
    int fd = socket(AF_INET, SOCK_DGRAM, 0);
    if(fd < 0) {
        return -1;
    }

    const unsigned int reuse = 1;
    if(setsockopt(fd, SOL_SOCKET, SO_REUSEADDR, &reuse, sizeof(reuse)) < 0) {
        close(fd);
        return -1;
    }

    if(fcntl(fd, F_SETFL, O_NONBLOCK) < 0) {
        close(fd);
        return -1;
    }

    struct sockaddr_in addr;
    memset((char*)&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    addr.sin_addr.s_addr =  INADDR_ANY;
    if(bind(fd, (struct sockaddr*)&addr, sizeof(addr))) {
        close(fd);
        return -1;
    }

    struct ip_mreq mcast_group;
    mcast_group.imr_multiaddr.s_addr = inet_addr(group);
    mcast_group.imr_interface.s_addr = INADDR_ANY; //inet_addr(interface);
    if(setsockopt(fd, IPPROTO_IP, IP_ADD_MEMBERSHIP, (char*)&mcast_group, sizeof(mcast_group))) {
        close(fd);
        return -1;
    }

    // segunda parte da inicialização



    return fd;
}
