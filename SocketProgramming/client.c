#include<sys/types.h>
#include <winsock2.h> /*#include<sys/socket.h> for UNIX*/
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

int main(){
    int network_socket;

    network_socket = socket(AF_INET,SOCK_STREAM,0);

    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(3000);
    server_address.sin_addr.s_addr = INADDR_ANY;
    
    int status = connect(network_socket,(struct sockaddr*) &server_address,sizeof(server_address));
    
    char server_response[256];

    recv(network_socket, server_response ,sizeof(server_response),0);

    printf("Server response:%s\n",server_response);

    close(network_socket);

    return 0;

}

