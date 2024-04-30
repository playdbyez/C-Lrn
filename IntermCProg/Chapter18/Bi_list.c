#include <stdio.h>
#include <stdlib.h>

typedef struct listnode
{
  struct listnode *next;
  struct listnode *prev;
  int value;
}Node;

static Node *Node_construct(int val)
{
  Node *nd = malloc (sizeof (Node));
  nd -> value = val;
  nd -> next = NULL;
  nd -> prev = NULL;
  return nd;
}

Node *List_Binsert(Node *head, int val)
{
  //printf("Insert at TAIL (%d)\n", val);
  Node *ptr = Node_construct(val);
  if (head == NULL)
  {   ptr -> next = head;
      ptr -> prev = head; 
      ptr-> value = val;  }
    

  else { 
    Node *qtr = ptr->next;
      ptr -> next = head;
      ptr -> prev = NULL;  
      ptr -> value = val;
    
  }
return ptr;                    
}

  int main ()
{
Node *head;
//head -> index = 0;
  head = List_Binsert(head,878);
  head = List_Binsert(head,5);
  head = List_Binsert(head,511);
  
  while (head != NULL)
  {
      printf ("%d\n",head-> value);
      head = head -> next;
  }
  
  
    return 0;
}
  
