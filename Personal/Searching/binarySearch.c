//Requires a  sorted array

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

  
}
