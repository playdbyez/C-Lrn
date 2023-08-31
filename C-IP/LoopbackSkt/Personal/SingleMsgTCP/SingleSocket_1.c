//Single Message Socket Client

#include<stdio.h>
#include<string.h>
#include<sys/socket.h>
#include<arpa/inet.h>

int main ()
{
int socketFD = socket(AF_INET, SOCK_STREAM,0);

char* ip= "127.0.0.1";
char* message = "Automated Message";		//to send a string char must be char* 
int n;

struct sockaddr_in address;
address.sin_family = AF_INET;
address.sin_port = htons(3000);
inet_pton(AF_INET,ip,&address.sin_addr.s_addr);

int result = connect(socketFD, &address, sizeof address);

if (result ==0)
printf("[+]Connection Success\n");
printf("[+]Message Sent\n");
n = write(socketFD,message, 255);



if (result !=0){printf ("Connection failed!");}

return 0;
}
