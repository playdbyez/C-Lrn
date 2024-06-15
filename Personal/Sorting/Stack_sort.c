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
// 6- If Y < X then pop Y out of the stack and into output until Y >= X
// 7- If Y >= X then X is now the top of the stack and Y goes under it
// 8- Once all values have been iterated through, the contents of the stack are popped to the output from last inserted until the end of the linked list


#include <stdio.h>

int main()
{
    //int set[] = {2,1,5,3};                 //Yes
    int set[] = {1, 5, 2, 3, 5, 4 };       //Yes
    //int set[] = {2,3,1};                   //No
    //int set[] = {8,6,5,3,1};               //Yes
    int len = sizeof(set)/ sizeof(set[0]);
    
    
    
    printf("Original = ");
    for (int i =0; i < len; i++){ 
                                    printf("%d", set[i]); 
                                    if (set[i] != '\0') {printf(" ");}    }
    
    
int stack[len];
stack[0] = -1;
    int stklen = 0;
    int stki = 0;
    
    
int outp[len];
    int outlen = 0;
   
   printf("\n");
   
    for (int i =0; i < len; i++)
    {
      
      
      //if the stack's top is bigger, insert val above
      if (stack[stki] != -1 && set[i] <= stack[stki])
      { stki++; stack[stki] = set[i]; stklen++;
          
          printf("\ninserted %d into stack", set[i]);
      }
      
      //if the stack's top is smaller, pop until top >= set[i]
      if(stack[stki] != -1 && set[i] > stack[stki])
            {
                for(int j = stki; j > -1; j--){
                                                if(stack[j] < set[i]){ outp[outlen] = stack[j]; outlen++;stki--;stklen--;}
                                                if(stack[j] == set[i]){stki++;stack[stki] = set[i]; stklen++; }
                                                if(stki == -1){stki = 0; stack[stki] = set[i];break;}
                                              }
            }
            
     //if the stack is empty, insert val
      if (stack[stki] == -1){stack[stki] = set[i]; stklen++;
      
        //  printf("\ninserted %d into stack", set[i]); //[OK]
      }         
    } 
    
    
    
    
    
    
     printf("\nSorted   = ");
    for (int i =0; i < outlen; i++){ 
                                    printf("%d", outp[i]); 
                                    if (outp[i] != '\0') {printf(" ");}    }
    
    /*
    */
}
