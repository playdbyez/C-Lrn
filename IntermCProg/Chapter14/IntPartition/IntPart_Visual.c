#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printPartition(int *arr, int legth)
{
	int ind;
		for ( ind = 0; ind  < length -1; ind++ )
			{printf("%d + ", arr[ind]);}
		printf("%d\n", arr[length -1]);
}

void partition (int *arr, intd ind, int left)
{
	int val;
if (left == 0){printPartition(arr, ind); return;}
		for (val =1; val <= left; val++)
		{ arr[ind] = val;
		 //printf("[ ind = %d left = %d val = %d ]\n", ind+1, left-val, val); 	// analyzer line 
		  partition(arr, ind+1, left -val);	}

}

int main (int argc, char *argv[])
{
	if (argc != 2) {return -1;}
	int n = (int) strtol (argv[1], NULL, 10);
	if (n <= 0) { return -1; }
int *arr ; 
arr = malloc (sizeof(int) * n);
partition(arr, 0, n);
free(arr);

return 0;

} 
