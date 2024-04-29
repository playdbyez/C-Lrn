#ifndefine LIST_H
#define LIST_H
#include <stdio.h>

typedef struct listnode
{
  struct listnode *next;
  int value;
}Node;

#endif
