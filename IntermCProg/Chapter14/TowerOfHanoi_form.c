// Recursive solution,
// m ammount of disks are stacked in one of three poles.
// the disks are arranged so that smaller disks are above the bigger disks thus, a larger disk can never be placed above a smaller disk
// How many steps are needed to move a tower of m disks to another pole inbetween 3 poles?


//The relationship is :
//                          f(n) = 1                   if n is 1
//                          f(n) = f(n-1) +1 + f(n-1)  if n > 2


# include <stdlib.h>
# include <stdio.h>

int f (int n)
{
  if (n == 1) {return 1;}
  return ( 2 * f (n-1)+1 );
}


int main (int argc, char ** argv)
{
  int m ;
          if (argc < 2){printf ("ERROR: at least one non-negative number is required as input"); return -1;}
  m = (int) strtol (argv[1], NULL, 10);
  printf("f(%d) = %d\n", m,f(m));
  return 0;
}
