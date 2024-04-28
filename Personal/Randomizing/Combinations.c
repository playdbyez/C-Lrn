// Intermediate C 16
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void printArray(int *arr, int length)
{
  int ind;
        for (ind = 0; ind< length; ind++)
              { 
                if (arr[ind] == 1){ printf ("%c ", ind + 65 );} // uppercase A
                printf("\n");
              }
}

// arr: array storing whether an element is selected or not
// ind: index of the item being deided on whether it is selected
// num: the total number of times
// toselect: the number of items to be selected
// selected: the number of items already selected
void combineHelp(int *arr, int ind, int num, int toselect, int selected)
{
  if (selected == toselect)    //selected enough items 
  {printArray(arr, num); return;}
  
}
