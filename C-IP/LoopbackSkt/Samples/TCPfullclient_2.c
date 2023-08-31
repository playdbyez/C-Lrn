//Full Functions Socket Client

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/socket.h>
#include<arpa/inet.h>


//Create a socket 
short SocketCreate(void)
{
	short hSocket;
	printf("Creating the socket\n");
	hSocket=connect(AF_INET,SOCK_STREAM,0);
	return hSocket;
}


//Try to Connect
int SocketConnect(int hSocket)
{
	int iRetval=1;
	int ServerPort = 90190;					//Port
	struct sockaddr_in remote ={0};
	
	remote.sin_addr.s_addr= inet_addr("127.0.0.1"); 	//Local Host
	remote.sin_family = AF_INET;
	remote.sin_port = htons(ServerPort);
	
	iRetval = connect (hSocket,(struct sockaddr *) &remote, sizeof(struct sockaddr_in));
	return iRetval;
}

//Send the data to the server and set the timout of 20 seconds
int SocketSend(int hSocket, char* Rqst, short lenRqst)
{
	int shortRetval =-1;
	struct timeval tv;
	tv.tv_sec = 20; 					//Timeout length
	tv.tv_usec =0;
	
		if(setsockopt(hSocket,SOL_SOCKET, SO_SNDTIMEO, (char *)&tv, sizeof(tv)) <0)
		{
			printf("Timed Out!\n");
			return -1;
		}
	shortRetval = send(hSocket, Rqst, lenRqst, 0);
	return shortRetval;
}

//Receive data from server
int SocketReceive(int hSocket, char* Rsp, short RvcSize)
{

	int shortRetval =-1;
	struct timeval tv;
	tv.tv_sec =20;
	tv.tv_usec =0;
		
		if(setsockopt(hSocket, SOL_SOCKET, SO_RCVTIMEO, (char *)&tv, sizeof(tv)) <0)
		{
			printf("Timed Out!!\n");
			return -1;
		}
	shortRetval = recv(hSocket, Rsp, RvcSize, 0);
	
	printf("Response %s \n", Rsp);
	return shortRetval;
}



//Driver Code
int main (int argc, char *argv[])
{
	int hSocket, read_size;
	struct sockaddr_in server;
	char SendtoServer[100] = {0};
	char server_reply[200] = {0};

//Create socket
	hSocket = SocketCreate();
		if(hSocket == -1)
		{
		printf("Could not create socket\n");
		return 1;
		}
	printf("Socket created\n");
	
//Connect to remote server
		if (SocketConnect(hSocket) <0)
		{
			printf("Connection failed.\n");
			return 1;
		}

	printf("Connection made\n");
	
	printf("Enter Message: ");
	gets(SendtoServer);
	

//Send data to server
SocketSend(hSocket, SendtoServer, strlen(SendtoServer));


//Received data from server
read_size = SocketReceive(hSocket, server_reply, 200);
printf("Server Response: %s\n\n",server_reply);


close (hSocket);
shutdown(hSocket,0);
shutdown(hSocket,1);
shutdown(hSocket,2);

return 0;
}


