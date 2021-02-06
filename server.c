#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int prt = 555;

void main() {
	char cmd[6000];
	int srvSock;
	struct sockaddr_in serverAddr;

	int clientSock;
	struct sockaddr_in clientAddr;
	socklen_t addr_size;
	char buffer[1024];
	srvSock = socket(PF_INET, SOCK_STREAM, 0);
	memset(*serverAddr, '\0', sizeof(serverAddr));
	serverAddr.sin_family = AF_INET;
	serverAddr.sin_port = htons(prt);
	serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	bind(srvSock, (struct sockaddr*)&serverAddr, sizeof(serverAddr));
	listen(srvSock, 5);
	addr_size = sizeof(clientSock);
	clientAddr = accept(srvSock, (struct sockaddr*), &newAddr, &addr_size);
	while true {
		printf(">: ");
		scanf("%s", buffer);
		send(newSocket, buffer, strlen(buffer), 0);
	}