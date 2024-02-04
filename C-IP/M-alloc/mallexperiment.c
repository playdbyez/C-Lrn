//increments the size of the ptr until we hit a memory address past the '\0';

#include <stdio.h>
#include <stdlib.h>


int main()
{
int n;
int *ptr;
int inc = 0;

n = 4;
ptr = (int*)malloc(n * sizeof (int));
    ptr[1] = 2;
    while (inc < n+3){
    printf ("%d ", ptr[inc]);
    inc++;
        
    }
    
}
