#include  <stdio.h>
#include  <string.h>
#include  <stdint.h>
#include  <stdlib.h>

static void int2Ip(uint32_t val);
// Option 1
//evaluates a 32bit value for conversion

char *arrBin(uint16_t size, uint32_t n);
//conv to bin array
//evaluates output size and 32bInt

static void dPrint (char *arr, uint8_t st,  uint8_t nd);
// prints binArray to decimal
// evaluates each 8bit section back-to-front



int main() 
{
    
    char inbut;
    printf("Enter 1 or 2\n");
    printf("->");
    scanf("%c", &inbut);
    
    switch(inbut)
    {
    case '1': int2Ip(3021966218); break;
    //case '2': ip2Int(); break;
       default: printf("\nERROR:Entry not recognised.");break;
    }
        
        
   
}
//Driver code






static void int2Ip(uint32_t val)
{
 uint32_t n = val;
 //Input
    
    uint32_t max = 4294967295;
    double sz = log10(n)+1;
    uint16_t sizen = sz;
    if (n > max){printf("ERROR: Invalid entry\n");}
    if (n < 1)  {printf("ERROR: Invalid entry\n");}
    //Input handling
    
    
   int *arr = arrBin(35, n);
   dPrint(arr, 7, 0);
   free(arr); 
}


 char *arrBin(uint16_t size, uint32_t n)
{
  if (size <= 0){return -1;}
  char *arr = malloc (sizeof(char) * size);
  if (arr == NULL) {return -1;}
  
    uint8_t inc = 0;;
    for (int8_t i = 31; i >= 0; i--){ 
        
        if (inc == 8){ arr[inc] = '.'; inc++;}    
        if (inc == 17){arr[inc] = '.'; inc++;}
        if (inc == 26){arr[inc] = '.'; inc++;}
        
        if ( (n &(1<<i)) == 0) {arr[inc] = '0';inc++; }
        if ( (n &(1<<i)) != 0) {arr[inc] = '1';inc++; }
          
    }
 return arr; 
}



static void dPrint (char *arr, uint8_t st,  uint8_t nd )
{
    
 int8_t j = st-1;
 uint8_t k = nd;
 uint64_t inc = 1;
   
 uint32_t tt = 0;
    if (arr[st] == '1') {tt = 1;}
       
     for ( ; j >= k; j--){ inc*=2;
                           if (arr[j] == '1'){tt+=inc;}  }
        
    printf ("%d" ,tt); 
    st+=9;
    nd+=9;
    if (st <=34)
    { printf ("."); return dPrint(arr,st,nd); }
        
    else {return;}

}
