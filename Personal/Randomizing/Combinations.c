// Intermediate C 16
// Requires a  list of distinct elements
// Similar to permuations but doesnt apply to whole list
// Relies on a number limitation in order to create subset combinations, of the same length, out of the original list
// Based on how many elements to combine, this function return all possible combinations of the appointed length
// Selecting A + B is the same as B + A

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
  if (ind == num){return;}     //end of array, no more items to select
  arr[ind] = 1;                //select this element
combineHelp(arr, ind+1, num, toselect, selected);
}

void combine(int *arr, int len, int toselect){combineHelp(arr, 0, len, toselect, 0);}

// MAIN FUNCTION
// first input required at main() indicates the size of the list ( Alphabet = 26 )  
// second input required indicates the combination length to apply to the list
int main (int argc, char * argv[])
{
  if (argc != 3) {printf("ERROR: Need one integers.\n");return -1;}
int num = (int) strtol(argv[1], NULL, 10);
  if (num <= 0) {printf("ERROR: Need one positive integer.\n");return -1;}
int toselect = (int) strtol(argv[2], NULL, 10);
  if (toselect <= 0) {printf("ERROR: Need one more positive integer.\n");return -1;}

int *arr;
arr = malloc (sizeof(int) * num);
int ind;
  for (ind = 0; ind< num; ind++)
        {arr[ind] = 0;}
combine(arr, num, toselect);
free(arr);
return 0;
}
