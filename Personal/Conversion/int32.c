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


