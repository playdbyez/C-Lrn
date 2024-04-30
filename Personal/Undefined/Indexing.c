// Incorrect aray indexes can be used to alter variables outside of its original array
// Even though we can modify values outisde the index, the main() function is the one that outputs the changes
// thus it is considered a flaw
// This function aims to change the value of y and z through incorrect indexes

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void f1(int *arr)
{
   arr[-2] = 2016;
   arr[-1] = -13;
}

int main (int argc, char ** argv)
{
   int x = -2;
   int arr[] = {0, 1, 2, 3, 4};
   int y = 15;
   int z = 128;
   printf("x = %d\ny = %d\nz = %d\n", x, y, z);
   f1(arr);
   printf("x = %d\ny = %d\nz = %d\n", x, y, z);
   return 0;
}

//Output:
// x = -2
// y = 15
// z = 128


// x = -2
// y = 2016
// z = -13
