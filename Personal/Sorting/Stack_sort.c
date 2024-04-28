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
// 2- Create a linked-list-like-structure that behaves like a stack
// 3- Create an empty array of the same size as the input list for storing output
// 4- If the stack is empty push X to stack,
// 5- The top value is the one pushed onto the stack last, call it Y
// 6- If Y =< X then pop Y out of the stack and into output
// 7- If Y > X then X is now the top of the stack and Y goes under it
// 8- Once all values have been iterated through, the contents of the stack are popped to the output from Top to Bottom

