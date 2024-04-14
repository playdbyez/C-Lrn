//How many ways can the positive integer n be partitioned into smaller values ?

#include <stdio.h>
#include <stdlib.h>

int f(int n){
		int i;
		int sum =0;
		if (n ==1) {return 1;}
	for (i = 1; i <n; i++){ sum += f(n-i);}
		sum++;
			return sum;				}

int main (int argc, char *argv[])
{ 
	if (argc < 2) {printf("ERROR: Need a positive integer \n"); return -1;}
			int n = (int) strtol(argv[1], NULL, 10);
	if (n <= 0) {printf("ERROR: Need a positive integer \n"); return -1;}

printf("f(%d) = %d\n", n, f(n));
 
return 0;

}
