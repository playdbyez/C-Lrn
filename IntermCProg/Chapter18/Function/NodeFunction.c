/*
  > Operations supported: 

                        - Insert at the back of the list
                        - Insert at the front of the list
                        - Search the list for a single value
                        - Delete a single node
                        - Delete all nodes
                        - Print list

*/
                          
#include "list.h"
#include <stdio.h>
#include <stdlib.h>

static Node *Node_construct(int val)
{
  Node *nd = malloc (sizeof (Node));
  nd -> value = val;
  nd -> next = NULL;
  return nd;
}

//Newly inserted items are placed at the beginning of the list and the first inserted item is a the end of the list
//Beginning = head of the list
Node *List_pushfront(Node *head, int val)
{
  printf("Inserting %d\n", val);
  Node *ptr = Node_construct(val);
  ptr -> next = head;            //Insert new node before head
  return ptr;                    //Returns the new node
}

//Newly inserted items are placed at the end of the list and the first inserted value is always the head of the list
//Behaves like a queue
Node *List_pushback(Node *head, int val)
{
  if (head == NULL){return Node_construct(val);}
  Node *p = head->next;
        while ((p->next) != NULL)  //Find last node
                  {p = p->next;}
  p->next = Node_construct(val);
  return head;
}


Node *List_search(Node *head, int val)     // If multiple nodes are the equal, this function returns the first match encoutered
{                                          // Node.next is always initialized to NULL in order to indicate the end of the list
 Node *ptr = head;
      while (ptr != NULL)
              {
                if (ptr -> value == val){return ptr;}
                ptr = ptr-> next;
              }
  return ptr;                    //End of list reached
}


Node *List_delete (Node *head, int val)
{
  printf("Deleting %d\n", val);
  Node *q = head;
          if (q == NULL){return -1;}               // Empty list 
          if (q->value == val)                     // Deleting the head node
              {
                head = head ->next;
                free(q);
                return head;
              }

  
 Node *p = head;                                   // Deleting a non-head node
  q = p->next;
          while ((q!= NULL) && (q->value)!= val)
            { p = p->next;
              q = q->next; }
  
  if (q != NULL)                                  // Match found at q->value
          { p->next = q->next;
                      free(q); }
  return head;
}


void List_print(Node *head)
{
  printf("\nPrinting the whole list:\n");
        while (head != NULL)
                {
                  printf("%d ", head->value);
                  head = head->next;
                }
  printf("\n");
}


void List_destroy(Node *head)                      // Delete the whole list
{
  while (head != NULL){
        Node *p = head.next;
        free(head)
        head = p;  
  }
}

// main() is declared on  a separate file
// Node *head = NULL; ( instance declaration within main())
