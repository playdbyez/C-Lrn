//Exercise 9-16

#include <stdio.h>
#include <stdlib.h>

int main ()
{

int ff = 0;
int dd = 1;
do 
{
printf("%d\n", ff);

ff+=dd;
printf("%d\n", dd);
dd+=ff;
} while(ff <= 300);

return 0;
}
