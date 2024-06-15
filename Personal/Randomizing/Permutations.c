// Intermediate C 16.3
// Requires a list of distinct elements
// Operates on the whole list
// Permutates an indefinite ammount of times in order to shuffle the index of each element untill
// all possible combinations of output are generated

//## Formula ##
// Factorial of N = N!
// N! = 0 x 1 x 2 x 3 x ... N

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printArray(int *arr, int length)
{
  int ind;
        for (ind = 0; ind< length; ind++){ printf ("%c ", arr[ind]);}
                  printf ("%c\n", arr[length -1]);
}

void swap (int *a, int *b)
{
  int s = *a;
  *a = *b;
  *b = s;
}

void permuteHelp(int *arr, int ind, int num)
{
  if(ind == num){printArray(arr, ind); return;}
  int loc;                                 // destination of arr[ind]
        for (loc = ind; loc< num; loc++){
            swap(&arr[ind], &arr[loc]);
            permute(arr, ind+1, num);
            swap(&arr[ind], &arr[loc]);   // swap back
        }
}

void permute(int *arr, int num) { permuteHelp(arr, 0, num); }

// MAIN FUNCTION
// Input required denotes the size of the array to allocate
// The allocated array stores capital letters of the alphabet in ascending order
// num should equal 26
// arr[0] = A, arr[1] = B, etc...
int main( int argc, char * argv[])
{
  if (argc != 2){  printf("\nERROR: Need an integer\n "); return -1;}
int num = (int) strtol(argv[1], NULL, 10);
  if (num <= 0){printf("\nERROR: Need a positive integer\n "); return -1;}
int *arr;
  arr = malloc (sizeof(int) * num);
int ind;
      for (ind = 0; ind< num; ind++){ arr[ind] = ind + 'A';}
  permute(arr, num);
  free(arr);
  return 0;
}
