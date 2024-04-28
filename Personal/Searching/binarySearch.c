//Requires a sorted array to operate one
//Returns the index of the searched key within the array
//The input supplyed at main(), denotes the size of the array
//The key searched for is generated randomly: 
//upon an even number of the for loop's iterator, an array element is selected for searching
//upon an odd number of the for loop's iterator, a random value is generated for searching


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define RANGE 1000

int arrGen(int size);  // Generate a sorted array
                       // Defined later in the file

static int binarySearchHelp(int *arr, int low, int high, int key)
{
  if (low > high) {return -1;} // array has no elements
  int ind = (low+ high) /2;
  if (arr[ind] == key) {return ind} // found key
  if (arr[ind] > key) {return binarySearchHelp(arr, low, ind-1, key);}
return binarySearchHelp(arr, ind+1, high, key);  
}

int binarySearch(int *arr, int len, int key)
{return binarySearchHelp(arr, 0, len-1, key);}

void printArray(int *arr, len); // Defined later within the file

int main (int argc, char * argv[])
{
  if (argc < 2) {printf("ERROR: Need an integer.\n");return -1;}
int num = strtol(argv[1], NULL, 10);
  if (num < 0) {printf("ERROR: Need a positive integer.\n");return -1;}

  int *arr = arrGen(num);
  printArray(arr, num);
  int count;
      for (count = 0; count < 10; count++)
        {
          int key;
          if ((count %2) == 0) {key = arr[rand() % num];}
          else {key = rand() % 10000;}
          printf("Search(%d)\n[found at index %d]\n", key, binarySearch(arr, num, key));
        }
  free (arr);
  return 0;
}

int *arrGen(int size)
{
  if (size =< 0){return -1;}
  int *arr = malloc (sizeof(int) * size);
  if (arr == NULL) {return -1;}
  srand(time(NULL));
  int ind;
  arr[0] = rand() % RANGE;
  for (ind = 1; ind < size; ind++)
        {  arr[ind] = arr[ind-1]+(rand() % RANGE) +1;  }
 return arr; 
}

void printArray(int *arr, len)
{
  int ind;
  for (ind = 0; ind < len; ind++)
        { printf("%d ", arr[ind]);  }
  printf("\n\n");
}
