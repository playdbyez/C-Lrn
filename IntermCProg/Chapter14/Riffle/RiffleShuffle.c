#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
    char deck[][2] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
char *Rdek;
char *Ldek;

time_t t;
int lowmid = (sizeof(deck) / sizeof(deck[0]))/4;
int himid = ((sizeof(deck) / sizeof(deck[0]))/4*3) - (lowmid/2);

srand ((unsigned) time(&t));
int cutpnt =  lowmid + (rand() % (himid - lowmid)); 
int rr[sizeof (deck) - cutpnt];
    int p = 0;
    for (int h = cutpnt; h < sizeof(deck); h++){rr[p] = deck[h]; p++;}
char ll[cutpnt];
    for (int h = 0; h < cutpnt; h++){ll[h] = deck[h];}

 //Output

//Wrongly outputed    
//for (int i =0; i < strlen(ll); i++){ printf("%c ", ll[i]); }
//    printf("\n");
//for (int i =0; i < strlen(rr); i++){ printf("%c ", rr[i]); }

//Deck's cut-point
//printf("%d", cutpnt);
    
//accurate size of deck
//printf("size is %d", sizeof(deck) / sizeof(deck[0]));   
   
    return 0;
}
