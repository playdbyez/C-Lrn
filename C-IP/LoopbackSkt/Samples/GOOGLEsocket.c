//Google DNS Test Connection 

#include<stdio.h>
#include<sys/socket.h>
#include<arpa/inet.h>

int main ()
{
int socketFD = socket(AF_INET, SOCK_STREAM,0);

char* ip= "142.250.188.46";
struct sockaddr_in address;
address.sin_family = AF_INET;
address.sin_port = htons(80);	
inet_pton(AF_INET,ip,&address.sin_addr.s_addr);

int result = connect(socketFD, &address, sizeof address);

if (result ==0)
printf("Connection Success");


if (result !=0){printf ("Connection failed!");}

return 0;
}
