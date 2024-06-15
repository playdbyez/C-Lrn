// Intermediate C 16.4
// Requires an unsorted list of values to operate on
// faster than quickSort
// Not all lists are stack-sortable
// Uses a stack-like container for its sorting methodology but its output its kept at a different container
// Stack-sortable lists can be identified by also identifying the following paramenters:
// 1- M = Highest value in the list 
// 2- a = portion of the list before the index of M ( left of arr[M] )
// 3- b = portion of the list after the index of M ( right of arr[M] )
// 4- Ma = largest value to the left of M
// 5- Mb = largest value to the right of M
// 6- if Mb < Ma then the list is not stack sortable

// Its method of sorting works by:
// 1- Read input list from first to last 
// 2- Create a linked-list-like-structure that behaves like a stack (Last input is the top of the list)
// 3- Create an empty array of the same size as the input list for storing output
// 4- If the stack is empty push X to stack,
// 5- The top value is the one pushed onto the stack last, X becomes Y
// 6- If Y < X then pop Y out of the stack and into output
// 7- If Y >= X then X is now the top of the stack and Y goes under it
// 8- Once all values have been iterated through, the contents of the stack are popped to the output from last inserted until the end of the linked list



int findIndex(int *arr, int first, int last, int maxmin)
{
  int ind;
  int answer = first;
  for(ind = first + 1; ind <= last; ind++)
    { if(maxmin == 1  &&  arr[answer] < arr[ind]  || maxmin == 0  &&  arr[answer] > arr[ind] ) { answer = ind; } }
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
