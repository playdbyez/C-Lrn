//Program checks if the list is stack sortable or not 
#include <stdio.h>

int findIndex(int *arr, int first, int last, int maxmin)
{
  int ind;
  int answer = first;
  for(ind = first + 1; ind <= last; ind++)
    { if(( (maxmin == 1)  &&  (arr[answer] < arr[ind]) )  || ( (maxmin == 0)  &&  (arr[answer] > arr[ind]) ) ) { answer = ind; } }
return answer;
}

int findMaxIndex(int * arr, int first, int last){ return findIndex(arr, first, last, 1); }
int findMinIndex(int * arr, int first, int last){ return findIndex(arr, first, last, 0); }

int isStackSortable(int *arr, int first, int last)
{
    if (first >= last){return 1;}
  int maxIndex = findMaxIndex(arr, first, last);
    if (first == maxIndex){return isStackSortable(arr, first+1, last);}
    if (maxIndex == last){return isStackSortable(arr, first, last-1);}

  int maxAIndex = findMaxIndex(arr, first, maxIndex - 1);
  int minBIndex = findMaxIndex(arr, maxIndex + 1, last);
    if (arr[maxAIndex] > arr[minBIndex]) {return 0;}
  int sortA = isStackSortable(arr, first, maxIndex - 1); 
  int sortB = isStackSortable(arr, maxIndex + 1, last);
    return (sortA && sortB);
}




int main()
{
    int setA[] = { 10, 4, 33, 5, 9, 2, 14, 57, 9, 3 };
    int setB[] = { 1, 5, 2, 3, 5, 4 };
    int setC[] = { 2, 3, 1 };
    int setD[] = { 5, 1, 11 };
    int lenA = sizeof(setA)/ sizeof(setA[0]);
    int lenB = sizeof(setB)/ sizeof(setB[0]);
    int lenC = sizeof(setC)/ sizeof(setC[0]);
    int lenD = sizeof(setD)/ sizeof(setD[0]);
    //printf("%d", lenD);
  
   printf("setA (%d)\n", isStackSortable(setA, 0, lenA));
   printf("setB (%d)\n", isStackSortable(setB, 0, lenB));
   printf("setC (%d)\n", isStackSortable(setC, 0, lenC));
   printf("setD (%d)\n", isStackSortable(setD, 0, lenD));
    return 0;
}
