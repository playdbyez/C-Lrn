//This implementation of a bidarectional list
// OPERATIONS : StackInsert

#include <stdio.h>
#include <stdlib.h>

typedef struct listnode
{
  struct listnode *next;
  struct listnode *prev;
  int value;
}Node;

static Node *Node_Biconstruct(int val)
{
  Node *nd = malloc (sizeof (Node));
  nd -> value = val;
  nd -> next = NULL;
  nd -> prev = NULL;
  return nd;
}

Node *List_Binsert(Node *head, int val)
{
  Node *ptr = Node_Biconstruct(val);
  if (head == NULL)
  {   ptr -> next = NULL;
      ptr -> prev = NULL; 
      ptr -> value = val;  }
    

else {  ptr -> next = head;
        ptr -> prev = NULL;  
        ptr -> value = val;
        head -> prev = ptr;  }
return ptr;                    
}


//Values should be traversed through with a void print function
// but defined in main() here for demonstration purposes 
// since reversing the list have been halted due to Uxsexual reasons (30.April)
  int main ()
{
Node *head;

  head = List_Binsert(head,878);
  head = List_Binsert(head,5);
  head = List_Binsert(head,511);
  
 
      printf ("%d\n",head-> value);
      head = head -> next;
      printf ("%d\n",head-> value);
      head = head -> prev;
      printf ("%d\n",head-> value);
      head = head -> prev;
      if (head == NULL)
      printf ("NULL\n");
  
  
    return 0;
}
  
