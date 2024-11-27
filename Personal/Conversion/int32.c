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
 
char * inflow ( char * arr, uint32_t b)
{ 
uint8_t j = 0;
for(int i = 31; i <= 0; i--)
{ 
if (j != 0 && (j % 8 )==0 ){
                  if ( j != 8 ) {   j++; a[j] = '.';}
                  if ( j == 8 ) {   a[j] = '.'; j++;}  }
    
a[j] = ( b &(1<<i));
j++;
}
return *a;
}


static void printArray (char *arr, uint8_t len)
{
  
  for (int i = 0; i <  len; i++)
    { printf("%d ",arr[i]);}
    printf("\n");
    return;
}



int main()
{
    uint32_t max = 4294967295;
 
    uint32_t n = 3021966218;
    
//NumbStr to int implementation
//Must be external func
 //   double sz = log10(n)+1;
 //   uint8_t sizen = sz;
// 
    
    if (n > max){printf("ERROR: Invalid entry\n");return 0;}
    if (n <= 0)  {printf("0.0.0.0\n");return 0;}
    if (n < 256 && n > 0){printf("0.0.0.%u\n", n); return 0; }//8
 
if (n>255){
     char *ext;
     ext = (char*)malloc(36*sizeof(char));

    inflow(&ext,n);
    printArray(&ext, 36);
    
    free(ext); 
}
 
    if (n < 4096){} //12
    if (n < 65536){} //16
    if (n < 1048576){} //20
    if (n < 16777216){} //24
    if (n < 268435456){} //28
    if (n < 4294967296){} //32
 
    }


###################
// v2

#include  <stdio.h>
#include  <stdint.h>
#include  <stdlib.h>

static void printArray (char *arr, uint8_t len);//prints binArray

char *arrBin(uint16_t size, uint32_t n)
{
  if (size <= 0){return -1;}
  char *arr = malloc (sizeof(char) * size);
  if (arr == NULL) {return -1;}
  
    uint8_t inc = 0;;
    for (int8_t i = 31; i >= 0; i--){ 
        
        if (inc == 8){ arr[inc] = '.'; inc++;}    
        if (inc == 17){arr[inc] = '.'; inc++;}
        if (inc == 25){arr[inc] = '.'; inc++;}
        
        if ( (n &(1<<i)) == 0) {arr[inc] = '0';inc++; }
        if ( (n &(1<<i)) != 0) {arr[inc] = '1';inc++; }
          
    }
 return arr; 
}




int main()
{
    uint32_t n = 3021966218;
    
   int *arr = arrBin(36, n);
  printArray(arr, 36);
    free(arr);
}




static void printArray (char *arr, uint8_t len)
{
  
  for (int i = 0; i <  len; i++)
    { printf("%c",arr[i]);}
    printf("\n");
    return;
}


//inside main
 uint32_t tt = 0;
    uint32_t inc = 1;
    for (uint8_t i = 0; i < 4; i++){
     for (uint8_t j = 27; j < 36; j++){
        if (arr[26] == '1' && i == 0) {tt = 1;}
        if (arr[18] == '1'&& i == 1) {tt = 1;}
        if (arr[9] == '1'&& i == 2) {tt = 1;}
        if (arr[0] == '1'&& i == 3) {tt = 1;}
         
         inc*=2;
         if (arr[j] == '1'){tt+=inc;}
         
        
     }
        
        inc = 1;
        if(i == 1){j = 19}
        if(i == 2){j = 10}
    }

