// n ammount of balls are to be randomly selected from a pull of 2 coloured balls REd and Blue.
// 2 Read balls cannot be selected
//The relationship is :
//                          f(n) = f(n-1) + f(n-2)

#include <stdio.h>
#include <stdlib.h>

  int f (int m){
          if (m <= 0) { printf("ERROR:Number must be positive!\n"); return -1;}
          if (m == 1) {return 2;}
          if (m == 2) {return 3;}
    return (f(m-1)+f(m-2));
  }


int main (int argc, char ** argv)
{
  int c;
  int n;
        if (argc < 2) { printf("ERROR:Insert a number\n"); return -1;}
        n = (int) strtol(argv[1], NULL, 10);
        c = f(n);
   printf("f(%d) = %d\n", n,c); 
   return 0;
}
