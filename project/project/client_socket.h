#ifndef CLIENT_SOCKET_H
#define CLIENT_SOCKET_H

//#define MAX_BUF_LEN 2048

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include <arpa/inet.h>

#define sys_err(S) do{fprintf(stderr,"[%s:%d] %s : %s\n",__FILE__,__LINE__,S,strerror(errno));exit(-1);}while(0)

class ClientSocket
{
    struct sockaddr_in server_ip, client_ip;
    int socket_fd;

public:
    ClientSocket();
    virtual ~ClientSocket();

    void setServer(char const *a_server_ip, short int a_port);
    int connect();
    int disconnect();
    int send(void *contents, int len);
    int recv(void *contents, int len);
    //int send(void *contents, int len, int flags);
    //int recv(void *contents, int len, int flags);
};

#endif // CLIENT_SOCKET_H
