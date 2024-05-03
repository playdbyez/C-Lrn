// Intermediate C 16.2
// Recursive implementation of the Quick Sort method of sorting 
// Requires an unsorted array to operate on
// For more efficient Transitivity in its comparisons, the value of the Pivot should be randomized
// Its method of sorting works by:
// 1- Assigning a pivot number 
// 2- Having an iterator increasing through the list in order to find a bigger value than the pivot 
// 3- Having another iterator decreasing from the end, in order to find a smaller value than the pivot
// 4- if both matches are found then both iterators are swapped
// 5- if only one iterator finds a match, the pivot will swap with it


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define RANGE 10000

static void swap (int *a, int *b)
{
  int s = *a;
  *a = *b;
  *b = s;
}

static void quickSortHelp (int *arr, int first, int last)
{
  // [first, last]: range of valid indexes (not last-1)
  if (first >= last){return;} // no need to sort one or no element
  int pivot = arr[first];     // pivot is assigned the first item of the array not a random number
  int low = first + 1;
  int high = last;
      while (low < high)
      {
                  while (low < last && arr[high] <= pivot){low++; }
                  while (first < high && arr[high] > pivot){high--;}
        if (low < high){ swap (&arr[low], &arr[high]);}
      }

  if (pivot > arr[high]) // move pivot to the right place
  { swap (&arr[first], &arr[high]);}
                        quickSortHelp(arr, first, high -1);  // recursive section
                        quickSortHelp(arr, low, last);
}

void quickSort(int *arr, int len){quickSortHelp(arr, 0, len-1);}

int *arrGen(int size) // generate an array of random integers from 1 to 10000
{
  if (size <=0) {return NULL;}
  int *arr = malloc (size * sizeof(int));
  if (arr==NULL){return NULL;}
  int ind;
  for (ind = 0; ind< size; ind++){ arr[ind] = rand() % RANGE;}
  return arr;
}

void printArray(int *arr, int len)
{
  int ind;
  int sorted = 1;
  for (ind = 0; ind < len; ind++)
    {
#ifdef DEBUG
      printf("%d ", arr[ind]);
#endif
      if (ind >0 && arr[ind] < arr[ind-1]){ sorted = 0;}
    }
  printf("\nsorted = %d\n\n ", sorted);
}


// MAIN FUNCTION
// Requires 2 inputs with the execution call
int main( int argc, char * argv[])
{
if (argc < 2){  printf("\nERROR: Need a positive integer\n "); return -1;}
if (argc == 3){  srand(strtol(argv[2], NULL, 10)); }
else { srand(time(NULL)); }
  int num = strtol(argv[1], NULL, 10);
if (num <= 0){printf("\nERROR: Need a positive integer\n "); return -1;}


  int *arr = arrGen(num);
  printfArray(arr, num);
  quickSort(arr,num);
  printArray(arr, num);
  free(arr);
  
  return 0;
}
