#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
    char deck[][2] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
char *Rdek;
char *Ldek;

time_t t;
srand ((unsigned) time(&t));

int lowmid = (sizeof(deck) / sizeof(deck[0]))/4;
int himid = ((sizeof(deck) / sizeof(deck[0]))/4*3) - (lowmid/2);
int cutpnt =  lowmid + (rand() % (himid - lowmid)); 


//allocates the right-hand Deck
char rr[(sizeof (deck)/ sizeof(deck[0])) - cutpnt] [2];
    int p = 0;
    for (int h = cutpnt; h < sizeof(deck)/ sizeof(deck[0]); h++)
    {
            for (int hb = 0; hb < sizeof(deck[0]); hb++)
            { rr[p][hb] = deck[h][hb]; printf("%c ", rr[p][hb]); }
            p++;        
    }
    
    printf("\n");

//copy the above nested-loop and apply to leftDeck    
    
    
 //Output    
    /*
    h -> 5-12
    hb -> 0-1 (7x)
    for (int h = cutpnt; h < sizeof(deck)/ sizeof(deck[0]); h++)
        {
            for (int hb = 0; hb < sizeof(deck[0]); hb++)
            { rr[p][hb] = deck[h][hb]; printf("%c", rr[p][hb]); }
            p++;        
        }
    
// char ll[cutpnt][2]; for (int h = 0; h < cutpnt; h++){ll[h] = deck[h][0];}



   

    for (int i =0 ; i < sizeof(deck)/ sizeof(deck[0]); i++)
        {
            for (int j = 0; j < sizeof(deck[0]); j++)
            { printf("%c",rr[i][j]); }
            printf(" ");        
        }
*/
//Deck's cut-point
//printf("%d", cutpnt);
    
//accurate size of deck
//printf("size is %d", sizeof(deck) / sizeof(deck[0]));   
   
    return 0;
}
