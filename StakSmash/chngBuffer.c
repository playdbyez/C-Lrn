
//Protostar Challenge STACK0


#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main (int argc, char **Argv)
{
volatile int mod;
char buffer[64];

mod = 0;
gets (buffer);

if(mod !=0)
{
printf("you have changed the 'mod' variable \n");
}
else{
printf("Try again?\n");
}
// output: StackSmashing is successful but the 'mod' variable remains the same
}
