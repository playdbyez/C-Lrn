//This a unidirectional implementation of a linked  list
// OPERATIONS: StackInsert, QueueInsert, Search, Delete, Reverse and Print
#include <stdio.h>
#include <stdlib.h>

typedef struct listnode
{
  struct listnode *next;
  int value;
}Node;

static Node *Node_construct(int val)
{
  Node *nd = malloc (sizeof (Node));
  nd -> value = val;
  nd -> next = NULL;
  return nd;
}

//Newly inserted items are placed at the beginning of the list and the first inserted item is a the end of the list
//Behaves like a stack
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
          if (q == NULL){printf ("\nList is empty.\n");return 0;}               // Empty list 
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
        Node *p = head->next;
        free(head);
        head = p;  
  }
}

Node *List_reverse(Node *head)
{
  if (head == NULL) {return NULL;}    //empty list
  Node * orighead = head;
  Node * revhead = NULL;
  Node * origsec = NULL;
          while(orighead != NULL)
            {
               
              origsec = orighead->next;
              orighead -> next = revhead;
              revhead = orighead;
              orighead = origsec;
            }

  return revhead;
}

int main( int argc, char * argv[])
{
  Node *head = NULL;
  head = List_pushfront(head, 917);
  head = List_pushfront(head, -504);
  head = List_pushfront(head, 326);
  List_print(head);
  head = List_delete(head, -504);
  List_print(head);
  head = List_pushfront(head, 138);
  head = List_pushfront(head, -64);
  head = List_pushfront(head, 263);
  List_print(head);
    if (List_search(head, 138) != NULL) {printf("\n138 is in the list \n");}
    else {printf("\n138 is not in the list \n");}
    if (List_search(head, 987) != NULL) {printf("\n987 is in the list \n");}
    else {printf("\n987 is not in the list \n");}
  head = List_delete (head, 263);                // Head Node
  List_print(head);
  head = List_delete (head, 917);                // Tail node
  head = List_reverse(head);
  List_print(head);
  List_destroy(head);
return 0;
}
