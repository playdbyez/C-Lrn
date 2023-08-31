#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>


int main ()
{


int sockv = socket(AF_INET, SOCK_DGRAM,0);

char buffer[1000];
char output[9000];

struct sockaddr_in cliaddr, serv_addr;
socklen_t serverLength = sizeof(serv_addr);

bzero(&serv_addr, sizeof(serv_addr));
serv_addr.sin_family = AF_INET;
serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
serv_addr.sin_port = htons(9709);

bind(sockv, (struct sockaddr *) &serv_addr, sizeof(serv_addr));





	while(1)
	{
	printf("\n[+]CMD: ");
	fgets(buffer, sizeof(buffer), stdin);
	sendto(sockv, buffer,sizeof(buffer), 0, (struct sockaddr *)&serv_addr, serverLength);
	printf("[>>]");
	
	 recvfrom(sockv, output, sizeof(output), 0, (struct sockaddr *)&serv_addr, &serverLength);
        printf("\n%s", output);
    	
    	int i = strncmp("bye", buffer, 3);
	int j = strncmp("Bye", buffer, 3);
	int k = strncmp("BYE", buffer, 3);
	if(i == 0 || j == 0 || k == 0)
	break;
    	}
	

}
