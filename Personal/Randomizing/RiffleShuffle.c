https://engineering.purdue.edu/ece264/17au/hw/HW07
// makes u se of combinatronics

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <time.h>


static void swap (int *a, int *b)
{
  int s = *a;
  *a = *b;
  *b = s;
}

//invoking quiksort:
// quickSort(arr,0, sizeof(arr)-1 );
static void quickSort (int *arr, int first, int last)
{
  
  if (first >= last){return;} // no need to sort one or no element
  int pivot = arr[first];     // pivot is assigned the first item of the array not a random number
  int low = first + 1;
  int high = last;
      while (low < high)
      {
                  while (low < last && arr[high] <= pivot){low++; }
                  while (first < high && arr[high] > pivot){high--;}
        if (low < high){ swap (&arr[low], &arr[high]);}
      }

  if (pivot > arr[high]) 
  { swap (&arr[first], &arr[high]);}
                        quickSort(arr, first, high -1);  // recursive section
                        quickSort(arr, low, last);
}


int main()
{
    char deck[][2] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
char *Rdek;
char *Ldek;

time_t t;
srand ((unsigned) time(&t));

int lowmid = (sizeof(deck) / sizeof(deck[0]))/3;
int himid = (((sizeof(deck) / sizeof(deck[0]))/4)*3) - (lowmid/2);
int cutpnt =  lowmid + (rand() % (himid - lowmid)); 

// print statements should me removed once done
//allocates the left-hand Deck
printf("\nLeft-Deck: ");
char ll[cutpnt][2];
    for (int h = 0; h < cutpnt; h++)
    {
            for (int hb = 0; hb < sizeof(deck[0]); hb++)
            { ll[h][hb] = deck[h][hb]; printf("%c", ll[h][hb]); }
             printf (" ");       
    }
    printf("[%d cards]", sizeof(ll)/sizeof(ll[0]));


//allocates the right-hand Deck
printf("\nRight-Deck: ");
char rr[(sizeof (deck)/ sizeof(deck[0])) - cutpnt] [2];
    int p = 0;
    for (int h = cutpnt; h < sizeof(deck)/ sizeof(deck[0]); h++)
    {
            for (int hb = 0; hb < sizeof(deck[0]); hb++)
            { rr[p][hb] = deck[h][hb]; printf("%c", rr[p][hb]); }
            p++;
            printf (" ");         
    }
    printf("[%d cards]", sizeof(rr)/sizeof(rr[0]));


int llen = sizeof (ll) / sizeof(ll[0]);
int rren = sizeof (rr) / sizeof(rr[0]);
int smlr = llen < rren ? llen : rren;
printf("\nsmaller deck being of len %d", smlr);
  
    
  //int anor = rand() %   
 //Output    
//Deck's cut-point
//printf("%d", cutpnt);
//    
//accurate size of deck
//printf("size is %d", sizeof(deck) / sizeof(deck[0]));   
   
    return 0;
}

