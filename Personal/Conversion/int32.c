// IP decimal range 2³²
// each section of the address represents 1 byte
// output is represented in bits


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



///



#include  <stdio.h>
#include  <math.h>
#include  <stdint.h>
#include  <stdlib.h>
 
char * inflow ( char * a, uint32_t b)
{ 
uint8_t j = 0;
for(int i =31; i <= 0; i--)
{ 
if ( j != 0 && (j % 8 )==0) { *a[j] = '.'; j++;}
*a[j] = ( b &(1<<i))+32;
j++;
}
return *a;
}
 
int main()
{
    uint32_t max = 4294967295;
 
    uint32_t n = 3021966218;
//strConv
 //   double sz = log10(n)+1;
 //   uint8_t sizen = sz;
// 
    if (n > max){printf("ERROR: Invalid entry\n");return 0;}
    if (n <= 0)  {printf("0.0.0.0\n");return 0;}
    if (n < 256 && n > 0){printf("0.0.0.%u\n", n); return 0; }//8
 
if (n>255){
     char *ext;
     ext = (char*)malloc(36*sizeof(char));
    free(ext); 
}
 
    if (n < 4096){} //12
    if (n < 65536){} //16
    if (n < 1048576){} //20
    if (n < 16777216){} //24
    if (n < 268435456){} //28
    if (n < 4294967296){} //32
 
    }
