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


/// Play with diz

#include  <stdio.h>
#include  <math.h>
#include  <stdint.h>
#include  <stdlib.h>
#include  <time.h>

int *arrGen(int size)
{
  if (size <= 0){return -1;}
  int *arr = malloc (sizeof(int) * size);
  if (arr == NULL) {return -1;}
  srand(time(NULL));
  int ind;
  arr[0] = rand() % 1000;
  for (ind = 1; ind < size; ind++)
        {  arr[ind] = arr[ind-1]+(rand() % 1000) +1;  }
 return arr; 
}

static void printArray (int *arr, uint8_t len)
{
  
  for (int i = 0; i <  len; i++)
    { printf("%d ",arr[i]);}
    printf("\n");
    return;
}



int main()
{
   int *arr = arrGen(10);
  printArray(arr, 10);
    
}

