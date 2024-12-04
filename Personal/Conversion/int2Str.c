#include  <stdio.h>
#include  <stdint.h>
#include  <string.h>
#include  <math.h>
 
int main()
{
    uint64_t n = 42949672961158;
    uint64_t m = n;
 
    float vl = log10(n)+1;
    int len = vl;
    char str[len];
    
    uint8_t x = len-1;
    uint8_t j = 0;
 
 
    uint64_t dec = 1;
    
    uint64_t k = 0;
    uint8_t g = 0;

 
    for (unsigned i = 0; i < len; i++){
 
        while (j < x){ dec*= 10;j++;}
        g = m/dec; 
        str[i] = g+48;
       
        
        k =  g * dec;
        m-=k;
        
            
j =0;
dec = 1;
x--;
        
}
 
    printf("%s", str);
 
    return 0;
}
