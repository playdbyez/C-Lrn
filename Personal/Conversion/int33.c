#include  <stdio.h>
#include  <stdint.h>
#include  <stdlib.h>

static void printArray (char *arr, uint8_t len);//prints binArray

char *arrBin(uint16_t size, uint32_t n);//conv to bin array
                                        //evaluates output size and 32bInt


static void dPrint (char *arr, uint8_t len);// re-orders binArray and prints to decimal
    




int main()
{
    uint32_t n = 3021966218;
    
   int *arr = arrBin(36, n);
   //dPrint(arr, 36);
   //printArray(arr, 36);
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


static void printArray (char *arr, uint8_t len)
{
  
  for (int i = 0; i <  len; i++)
    { printf("%c",arr[i]);}
    printf("\n");
    return;
}


static void dPrint (char *arr, uint8_t len)
{
 uint8_t j = 28;
 uint8_t k = 35;
 uint32_t tt = 0;
    uint64_t inc = 1;
    
    for (uint8_t i = 0; i < 4; i++){
        if (arr[27] == '1' && i == 0) {tt++;}
        if (arr[18] == '1'&& i == 1) {tt++;}
        if (arr[9] == '1'&& i == 2) {tt++;}
        if (arr[0] == '1'&& i == 3) {tt++;}
        if(i == 1){j = 19; k = 26;}
        if(i == 2){j = 10; k = 17;}
        if(i == 3){j = 1; k = 8;}
        
     for ( j = j; j < k; j++){
     
         
         inc*=2;
         if (arr[j] == '1'){tt+=inc;}
         
        
     }
        inc = 1;
        printf ("%d." ,tt);
        tt = 0;
        
        
    }
 
    
    return;
}
