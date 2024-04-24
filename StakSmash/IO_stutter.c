//Intermediate C 11.2
// Using a wrong index to modify a program's behaviour
// the line with the hex value may have to be altered depending on the output of the following commands
//$ gcc -version 
//$ more /proc/cpuinfo


#include <stdio.h>
#include <stdlib.h>

void f0() {}
void f1 (void) 
{
  char name[10] = {9, 8 ,7, 6, 5, 4, 3, 2, 1, 27};
  name [24] = 0x73;
  f0();
}

void f2 (void)
{printf ("f2 has done something bad\n");}


int main (int argc, char * argv[])
{
f1();
  return EXIT_SUCCESS;
}


// Output:
          f2 has done something bad
          Segmentation fault (core dumped)
