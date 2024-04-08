// 8.1.2
// This example is meant to be split up into two files 
// one file containing the external function (aredistinct.c)
// one file containing the main function (main.c)
// alternatively both can exist in the same file
// compilation instructions can be found bellow

//main.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int areDistinct(int * arr, int len);

int main (int argc, char * argv[])
{
  if (argc != 2){return -1;}

FILE * fptr = fopen(argv[1], "r");
  if (fptr == NULL) {return -1;}

int length = 0;
int value;
  while (fscanf(fptr, "%d", & (arr[length])) == 1) {length++;}
  fclose(fptr);

int dist = areDistinct(arr, length);
  printf("The elements are");
                        if (dist == 0){ printf(" not ");}
  printf(" distinct. \n");
  free(arr);
return 0;
}

//aredistinct.c
int areDistinct(int *arr, int len)
{
  int ind1;
  int ind2;
     for (ind1 = 0; ind1 < len; ind1 ++)
     { 
           for (ind2 = ind1+ 1; ind2 < len; ind2 ++) 
               {
                 if (arr[ind1] == arr[ind2]) {return 0;} // found two elements with the same value
               }
     }
  //have not found two elements of the same value
return 1;
}



