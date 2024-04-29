#include <stdio.h>
#include <stdlib.h>
#include "list.h"
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
  List_print(head);
  List_destroy(head);
return 0;
}
