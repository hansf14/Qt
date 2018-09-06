#include "client_socket.h"

ClientSocket::ClientSocket()
{
    memset(&server_ip, 0, sizeof(server_ip));
    memset(&client_ip, 0, sizeof(client_ip)); //TODO : not 0, get the actual client ip (the user)

    //Create socket
    socket_fd = socket(PF_INET, SOCK_STREAM, 0);
}

void ClientSocket::setServer(char const *a_server_ip, short int a_port)
{
    //Create socket
    socket_fd = socket(PF_INET, SOCK_STREAM, 0);

    //Set server address
    server_ip.sin_family = AF_INET;
    server_ip.sin_addr.s_addr = inet_addr(a_server_ip);
    server_ip.sin_port = htons(a_port);
}

ClientSocket::~ClientSocket()
{
    close(socket_fd);
}

int ClientSocket::connect()
{
    printf("Connecting to server...\n");
    if(::connect(socket_fd, (struct sockaddr *)&server_ip, sizeof(server_ip)) < 0)
    {
         sys_err("Connect failed !");
         return -1;
    }
    printf("Connecting to server...OK\n");
    return 0;
}

int ClientSocket::send(void *contents, int len)
{
       return  write(socket_fd, contents, len);
}

int ClientSocket::recv(void *contents, int len)
{
    return read(socket_fd, contents, len);
}

// cnt = read(STDIN_FILENO, buf, MAX_BUF_LEN); //read stdin
