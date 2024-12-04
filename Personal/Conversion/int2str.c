// Converts unsigned value to string
// 0 - 18446744073709551615

#include  <stdio.h>
#include  <stdint.h>
#include  <string.h>
#include  <math.h>
 
int main()
{
    uint64_t n = 42949672961158;
    uint64_t m = n;
    uint64_t dec = 1;
    uint8_t iter = 0; 
    uint64_t bigDigit = 0;
    uint8_t oneDigit = 0;

    float vl = log10(n)+1;
    int len = vl;
    char str[len];
   // Size of output
 
    uint8_t loop = len-1;

 
 for (unsigned i = 0; i < len; i++){
 while (iter < loop){ dec*= 10;iter++;}
        oneDigit = m / dec; 
        str[i] = oneDigit + 48; 
        bigDigit = oneDigit * dec;
        
        
m -= bigDigit;            
iter = 0;
dec = 1;
loop--;       
}
 
    printf("%s", str);
    return 0;
}
