// Intermediate C 9.
// Requires an unsorted list to operate on
// Requires items within the list be distinct
// Returns an integer list sorted into ascending order
// The selection sort algorithm, relies on recursively selecting the 
//smallest element and incrementally placing them closer to the head of the list.


#include <stdio.h>

static void printArray (int *arr, int len)
{
  
  for (int i = 0; i <  len; i++)
    { printf("%d ",arr[i]);}
    printf("\n");
    return;
}

static void swap (int *a, int *b)
{
  int s = *a;
  *a = *b;
  *b = s;
}

void Selec_sort(int *arr, int len)
{
  int ind1;
  int ind2;
          for (ind1 =0; ind1 < len; ind1++)
            {
              int minind = ind1;             
                          for (ind2 =ind1+1; ind2 < len; ind2++)
                            { if(arr[minind] > arr[ind2]) { minind=ind2; } }
                            
                            if (minind != ind1) { swap(&arr[ind1], &arr[minind]); }
            }
}


int main( )
{
  int arr[] = {5, 13, 487, 1, 34, 126, 55};
  int silz = sizeof(arr) / sizeof(int);
  printArray(&arr, silz);
  Selec_sort(&arr, silz);
  printArray(&arr, silz);
}
