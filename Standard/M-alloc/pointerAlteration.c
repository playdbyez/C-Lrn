//Re-assign the value of q[10] by using an external pointer
// Possible since ptr can point to a dereference ampersand

#include <stdio.h>
#include <stdlib.h>


int main()
{

int *ptr;

int q[15];
    q[10]= 7;

     //ptr++;
    // uncommenting the line above results in the Output : 7
    
    // &ptr = &q[10]
    // assignment is invalid
    
    ptr =  &q[10];
    *ptr = 9;
    printf("\n%d", q[10]);
    
     
    
}
// Output: 9
