#include <stdio.h>
#include <stdlib.h>
#include <winsock.h>

int main(int argc,char *argv)
{
	WSADATA wsadata;
	SOCKET hServSock, hClntSock;
	SOCKADDR_IN servAddr, clntaddr;
	int szclntaddr;
	char message[] = "hello world\n";
	if (argc != 2)
	{
		printf("usage :%s <port>\n", argv[0]);
		return -1;
	}
	if (WSAStartup(MAKEWORD(2, 2), &wsData) != 0)
	{
		printf("WSAStartup error\n");
		return -1;
	}
	hServSock = socket(AF_INET, SOCK_STREAM, 0);
	if (hServSock == INVALID_SOCKET)
	{
		printf("socet error\n");
		return -1;
	}

}