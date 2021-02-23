#include "agtmessagebroker.h"
#include "agtobjecttree.h"
#include <arpa/inet.h>
#include <cstdlib>
#include <errno.h>
#include <netinet/in.h>
#include <sstream>
#include <stdio.h>
#include <string>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define UDP_PORT 7777

extern agtObjectTree myTree;
extern void display();

std::vector<std::string> agtMessageBroker::split(const std::string s, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(s);
    std::getline(tokenStream, token, delimiter);
    tokens.push_back(token);
    std::getline(tokenStream, token, '\0');
    tokens.push_back(token);
    return tokens;
}

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
    memset(server_addr.sin_zero, 0, 8);

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
        printf("%s\n", recv_data);

        std::string text = recv_data;
        // std::cout << split(text, '.')[0] << std::endl;
        myTree.find(split(text, '.')[0])->update(split(text, '.')[1]);

        fflush(stdout);
    }
}
