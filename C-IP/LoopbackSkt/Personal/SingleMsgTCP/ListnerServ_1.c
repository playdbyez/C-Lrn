//Listener Server
//Terminate Server with crlt + c

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

void error(const char *msg){ perror(msg);exit(1);}

int main (int argc, char *argv[])
{

int sockfd;
int newsockfd;
int portno;
int n;
char buffer[255];
int cnt = 1;
struct sockaddr_in serv_addr, cli_addr;
socklen_t clilen;

sockfd = socket(AF_INET, SOCK_STREAM,0);


	if (sockfd < 0){error("Error opening socket!");}


bzero((char *) &serv_addr, sizeof(serv_addr));

serv_addr.sin_family = AF_INET;
serv_addr.sin_addr.s_addr = INADDR_ANY;
serv_addr.sin_port = htons(3000);	//PORT

	if (bind(sockfd,(struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0)
		error("Binding Failed!");

while(1){
		
listen(sockfd,5);
clilen = sizeof(cli_addr);
newsockfd = accept(sockfd, (struct sockaddr *) &cli_addr, &clilen);

if(newsockfd < 0)
error("Error on Accept");


	bzero(buffer , 255);
	n = read (newsockfd, buffer, 255);
	if (n>0)
	printf("[+]Client:  %s %d\n", buffer, cnt++);
	
	
						}
						
	close(newsockfd);
	close(sockfd);
	
	return 0;
}
