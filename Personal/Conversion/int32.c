// IP decimal range
// each section of the address represents 1 byte
// output is represented in bits
// last output 2³²
#include  <stdio.h>

int main()
{
    unsigned  long f = 1;
    printf ("1 ");
    for (int i = 1; i <= 32; i++)
    {
        if (i % 8 == 0 && i != 0){printf("\n");}
        if (i <32)printf("%ld ", f*=2);
        if (i == 32)printf("%ld ", (f*=2) -1);
    }
 
    return 0;
}




//Implementation v2

#include  <stdio.h>
#include  <math.h>

int main()
{
    unsigned long max = 4294967295;
    
    unsigned long n = 3021966218;
    double sz = log10(n)+1;
    int sizen = sz;
    
    if (n > max){printf("ERROR: Invalid entry\n");}
    if (n < 1)  {printf("ERROR: Invalid entry\n");}
    
    if (n < 16){} //4 
    if (n < 256){} //8
    if (n < 4096){} //12
    if (n < 65536){} //16
    if (n < 1048576){} //20
    if (n < 16777216){} //24
    if (n < 268435456){} //28
    if (n < 4294967296){} //32
    
    
    
    unsigned long f = 1;
    
    
    for (int i  = 1; i <= 32; i++)
    {   
        f*=2; 
        if (i%4 == 0) {printf("%ld ", f);}
    }
    
    /*
    for (int i  = 0; i <= sizen; i++)
    {
        printf("%d ", n & (1 << i));
    }
    */
    //printf ("%d",sizen);
    
    return 0;
}
