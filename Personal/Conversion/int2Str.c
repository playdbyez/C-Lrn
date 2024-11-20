#include  <stdio.h>
#include  <stdint.h>
#include  <math.h>
 
int main()
{
    uint32_t n = 65891;
    char *str;
 
    float vl = log10(n)+1;
    int len = vl;
    uint8_t x = len-2;
    uint8_t y = len-3;
 
 
    uint32_t dec1 = 10;
    uint32_t dec2 = 10;
    uint8_t j = 0;
    uint32_t k = 0;
    uint32_t l = 1;
    uint32_t g = 0;
    float   p ;
 
    for (unsigned i = 0; i < 2; i++){
 
        while (j < x){ 
            dec1*= 10; 
 
            if (i >0){ dec2*=10;}
            j++;
        }
 
        if(i == 0){g = n/dec1; str[i] = g-49;}
 
 
        if (i >0){
            l*=10;
            p = (n/dec2); printf("%f", p);
            k = p*l;
            p = n/dec1;
            g = p*l;
            dec2 = 10;
        }
j =0;
dec1 = 10;
x --;
        printf("%lld\n",k); 
}
 
 
 
 
 
//    
 
 
//    if (i > 0) {}
    //decrement x for every i cycle
    //x--;
 
 
    return 0;
}
