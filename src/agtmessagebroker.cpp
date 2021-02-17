#include "agtmessagebroker.h"
#include <arpa/inet.h>
#include <errno.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#define UDP_PORT 7777

agtMessageBroker::agtMessageBroker() {

    int sock;
    int addr_len, bytes_read;
    char recv_data[1024];
    struct sockaddr_in server_addr, client_addr;

    if ((sock = socket(AF_INET, SOCK_DGRAM, 0)) == -1) {
        perror("Socket");
        exit(1);
    }

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(UDP_PORT);
    server_addr.sin_addr.s_addr = INADDR_ANY;
    bzero(&(server_addr.sin_zero), 8);

    if (bind(sock, (struct sockaddr *)&server_addr, sizeof(struct sockaddr)) == -1) {
        perror("Bind");
        exit(1);
    }

    addr_len = sizeof(struct sockaddr);

    printf("\nUDPServer Waiting for client on port ");
    fflush(stdout);

    while (1) {

        bytes_read = recvfrom(sock, recv_data, 1024, 0, (struct sockaddr *)&client_addr, (socklen_t *)&addr_len);

        recv_data[bytes_read] = '\0';

        printf("\n(%s , %d) RECEIVED : ", inet_ntoa(client_addr.sin_addr), ntohs(client_addr.sin_port));
        printf("%s", recv_data);
        fflush(stdout);
    }
}
