#include <stdio.h>
#include <winsock2.h>

int main(){
	WSADATA wsa;
	SOCKET sock;
	struct sockaddr_in server;
	
	WSAStartup(MAKEWORD(2,2), &wsa);
	
	for(int port = 1; port <= 100; port++){
		
		sock = socket(AF_INET, SOCK_STREAM, 0);
		
		server.sin_addr.s_addr = inet_addr("127.0.0.1");
		server.sin_family = AF_INET;
		server.sin_port = htons(port);
		
		if(connect(sock, (struct sockaddr *)&server, sizeof(server)) == 
		0){
			
			printf("Port %d is open\n", port);
		}
		
		closesocket(sock);
	}
	
	WSACleanup();
	return 0;
}