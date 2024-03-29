#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

void error(const char *msg)
{
perror(msg);
exit(0);
}

int main (int argc, char *argv[])
{

int sockfd;
int portno;
int n;

struct sockaddr_in serv_addr;
struct hostent *server;


char buffer[255];
if (argc <3) 
{
fprintf(stderr,"Error! \n Compile with:  %s <hostname>  <port> \n", argv [0]);
exit(0);
}

portno= atoi(argv[2]);
sockfd = socket(AF_INET, SOCK_STREAM, 0);

if (sockfd < 0)
	error("Error Opening Socket");
	server = gethostbyname(argv[1]);

if (server == NULL){
	fprintf(stderr, " ERROR ! \nNo Such  host\n");
	exit(0);}







bzero((char *) &serv_addr, sizeof(serv_addr));
serv_addr.sin_family = AF_INET;

bcopy((char *)server -> h_addr, (char *) &serv_addr.sin_addr.s_addr,server-> h_length);

serv_addr.sin_port =htons(portno);


if (connect(sockfd,(struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) 
 	error("Error");
	printf("client: ");
	
while(1)
{
bzero(buffer, 256);
fgets(buffer, 255, stdin);
n = write(sockfd, buffer,strlen(buffer));
if(n<0)
	error("Error writing to socket");
bzero(buffer, 256);
n= read(sockfd, buffer, 255);

if(n<0)error("Error reading from socket");

printf("Server: %s \n", buffer);
int i = strncmp("bye", buffer, 3);
if(i==0)break;
}
	
close(sockfd);
return 0;
}
