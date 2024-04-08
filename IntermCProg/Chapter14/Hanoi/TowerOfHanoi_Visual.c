############ :: TOWER OF HANOI VISUALIZER :: ##################

#include <stdio.h>
#include <stdlib.h>

void move (int disk, char src, char dest, char additional)
{
	if (disk == 1) {printf("move disk 1 from %c to %c \n", src, dest);return;}
			move (disk -1, src, additional, dest);
	printf("move disk %d from %c to %c \n",disk, src, dest);
			move (disk -1, additional, dest, src);
}

int main (int argc, char *argv[])
{
	int n;
if (argc < 2) {printf("ERROR: Need a positive integer \n"); return -1;}
	n = (int) strtol(argv[1], NULL, 10);
if (n <= 0) {printf("ERROR: Need a positive integer \n"); return -1;}

printf("f(%d) = %d\n", n, f(n));
 
return 0;
}
