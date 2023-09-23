#include<sys/types.h>
#include<unistd.h>
#include<string.h>
#include<pwd.h>
#include<stdio.h>

int main(int argc, char *argv[ ]) 
{
uid_t              uid;
struct passwd 	   *pwd;

uid = getuid( );	
printf("User's UID is %d.\n", (int)uid);


if (!(pwd = getpwuid(uid))) 
{
	printf("Unable to get user's password file record!\n");
	endpwent( );
	return 1;
}
printf("User's home directory is %s\n", pwd->pw_dir);
endpwent( );

return 0;
}
//output user
// UID: 1000, Homedir: home/ThisPC

//output sudo 
// UID: 0, Homedir: root

//Compare with
//$ id
//$ printenv


