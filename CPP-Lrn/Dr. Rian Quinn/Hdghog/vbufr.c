#include <stdio.h>

int main () 
{
char username[20];


printf("Enter your name: ");
scanf("%s", username);


printf("Hello %s\n", username);
printf("Program exited normally");

return(0);
}

//gdb output: 
/*
*** stack smashing detected ***: terminated

Program received signal SIGABRT, Aborted.
__GI_raise (sig=sig@entry=6) at ../sysdeps/unix/sysv/linux/raise.c:50
50	../sysdeps/unix/sysv/linux/raise.c: No such file or directory.

//output:
*** stack smashing detected ***: terminated
Aborted (core dumped)
*/
