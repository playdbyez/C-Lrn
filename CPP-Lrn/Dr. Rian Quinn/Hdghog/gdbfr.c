#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
char whatever[20];
strcpy(whatever, argv[1]);
printf(argv[1]);
return 0;
} 

//Instructions:
// execute via Terminal: 
// $ ./a.out <yourentry>
// if yourentry > 20 char = Success!

// execute via gdb: 
// $ gdb --exec ./a.out
// (gdb) ./a.out <yourentry>
// if yourentry > 20 char = Success!
