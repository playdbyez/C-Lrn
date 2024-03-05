#include <stdio.h>
#include <stdlib.h>


int main()
{
int n;
int *ptr;
int inc = 0;

n = 4;
//ptr = (int*)malloc(n * sizeof (int));
    ptr[1] = 2;
    
    //old value of ptr
    printf("%d\n", ptr[1]);
        
    printf ("%p \n", ptr[1]);   
    printf ("%p ", (void *) n);
    
    
   ptr[1] = ptr[1] + sizeof(char)*2 ;
    
    //new value of ptr
    printf("\n%d", ptr[1]);
    
}
