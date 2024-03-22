//increments the size of the ptr until we hit a memory address past the '\0';

#include <stdio.h>
#include <stdlib.h>


int main()
{
int n;
int *ptr;
int inc = 0;

n = 4;
unsigned long long m = 11300000000000;
ptr = (int*)malloc(n * sizeof (int));
    int q = 7;
    ptr[1] = 2;
    while (inc < n*n){
    printf ("\n%p", &ptr[inc]);
    inc++;
        
    }
    //increments the pointer address by sizeof int () 
    
        
    printf ("\n\n!major increment!\naddress of ptr =%p", &ptr[m]);
    printf("\naddress of q =  %p",&q);
    //gets close to the address of &q but not enough
    
    
    
    
    printf("\n%d", &ptr[m]);
    printf("\n%d", &q);
    
    int long long major = &ptr[m] > &q ? &ptr[m] : &q;
    int long long minor = &ptr[m] < &q ? &ptr[m] : &q;
    int long long diff = major - minor;
    
    printf("\n\n\nthe difference between the addresses is = %d", diff);
    
     
    
}
