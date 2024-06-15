#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct listnode
{
    struct listnode *next;
    char value;
}Node;



Node *Listmake(char val)
{   Node *chptr = malloc (sizeof (Node));
    chptr -> value = val;
    chptr -> next = NULL;
    return chptr;   }

Node *Listin(Node *head, char val)
{   Node *nptr = Listmake (val);
    nptr -> next = head;
    return nptr;    }


char *Listerate (Node *head, char *arr, int len)
{
  printf("\nPrinting the whole list:\n");
        int bil = 0;
        int uti = 0;
        Node *pl = head;
        while (pl != NULL )
                {
                if (pl -> value != '0'){bil = 1;}
                if (bil == 1){arr[uti] = pl->value; uti++;}
                      pl = pl->next;
                }
return arr;
}


void Listend(Node *head)                      
{
  while (head != NULL){
        Node *p = head->next;
        free(head);
        head = p;  
  }
}

int main ()
{
    char *a = "0001";
    char *b = "000009";
   int len1 = strlen(a);
   int len2 = strlen(b);  
   int max  = len1>len2 ? len1: len2;
   unsigned long internz;
  
  char sumtable[2][max];
  
          int long tabley = sizeof (sumtable)/ sizeof sumtable [0];
          int long tablex = sizeof sumtable [0]/ sizeof sumtable [0][0];
  int long long iter = tablex-1;
  
     memset(sumtable, '0', sizeof(sumtable));
  
for (int long long i = len1-1; i > -1; i--)
    {if (iter>-1){sumtable[0][iter] = a[i];iter--;}}
 iter = tablex -1;
  for (int long long i = len2-1; i > -1; i--)
    {if (iter>-1){sumtable[1][iter] = b[i];iter--;}}

Node * nd = NULL;
  int sum = 0;
  int carry = 0;
  char buffsum[4];
   int bl = 0;
  
    for (int i = tablex-1; i > -1; i--){    
        for (int j = 0; j < tabley; j++){     sum += sumtable[j][i] - 48;   }
        sum+= carry;
                sprintf(buffsum, "%d", sum);
        if (strlen(buffsum) == 1){ nd = Listin(nd, buffsum[0]); bl++; carry = 0;}
        if (strlen(buffsum) == 2){ nd = Listin(nd, buffsum[1]); bl++; carry =buffsum[0]-48; }
        
        if (i == 0 && strlen(buffsum) == 2) {nd = Listin(nd, buffsum[1]); bl++;nd = Listin(nd, buffsum[0]); bl++; carry = 0;}
        if (i == 0 && strlen(buffsum) == 1) { carry = 0;}
        
        sum = 0;
    }
    
    char *buff;
  buff = malloc(sizeof (char) * (bl+1));

    buff =  Listerate(nd,buff,bl+1);
            Listend(nd);

    for (int i = 0; i < bl+1; i++)
    {printf ("%c ", buff[i]);}
}
