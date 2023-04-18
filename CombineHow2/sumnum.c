#include<stdio.h>

void sumstore(int x, int y, int* dest);

int main(int argc, char** argv) 
{
int z, x = 351, y = 333;
sumstore(x,y,&z);
printf("%d +  %d = %d\n",x,y,z);
return 0;
}


//this file is meant to be compiled in conjunction with sumstore.c
//(gcc -o newsum sumnum.c sumstore.c)


// Additionally the literal '%d' within the printf statement is a placeholder for the values listed outside the string respectively.
