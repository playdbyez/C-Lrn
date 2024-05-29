//Sequential Approach
// Reads value target value (kval) and the set's elements from a file
// Checks if set is valid (Values must be: Distinct, and non-negative)
// Generates all possible subsets from original set including subsets of a single value
// Sums up each generated subset and identifies how many of these can sum up to the target value (kval)

#include <stdio.h>
#include <stdlib.h>

//determines if the subset sums up to kval
int subsetEqual(int *setA, int sizeA, int kval, unsigned code)
{
  int sum = 0;
  int ind = 0;
  unsigned origcode = code;
      while((ind < sizeA) && (code > 0))
        {
          if ((code % 2) ==1){sum += setA[ind];}
          ind++;
          code >>=1; // means devided by 2
        }
  if (sum == kval){printf("Equal: sum = %d\nCode = %X\n",sum,origcode); return 1;}
  return 0;
}


//maxCode === 2^n
//n == sizeA
int subsetSum(int *setA, int sizeA, int kval)
{
  unsigned maxCode = 1;
  unsigned ind;
    for(ind = 0; ind < sizeA; ind++){maxCode *= 2;}
  int total = 0;
    for(ind = 1; ind < maxCode; ind++){total+= subsetEqual(setA, sizeA, kval, ind);}
  return total;
}

//Checks if SetA is valid
int isValidSet(int *setA, int sizeA)
{
  int ind1;
  int ind2;
    for (ind1 = 0; ind1 < sizeA; ind1++)
      {
        if (setA[ind1] <= 0){return 0;}
          for (ind2 = ind1+1; ind2 < sizeA; ind2++)
            {  if(setA[ind1] == setA[ind2]){return 0;}  }
      }
  return 1;
}

//extracts the values for the original set
int countInteger(FILE *fptr)
{
  int numInt = 0;
  int value;
    while (fscanf(fptr, "%d", &value) == 1) {numInt++;}
return numInt;
}

//MAIN
int main (int argc, char * argv[])
{
  if (argc < 2){printf("ERROR: No file specified\n"); return -1;}
      FILE *fptr = fopen(argv[1], "r");
  if (fptr == NULL){printf("ERROR: Could not open file\n"); return -1;}
int numInt = countInteger(fptr);
fseek(fptr, 0, SEEK_SET);
int kval;
  if (fscanf(fptr, "%d", &kval) != 1){printf("ERROR: Could not extract target value from file\n"); return -1;}
numInt--;
int * setA = malloc (sizeof (int) * numInt);
int ind = 0;
    for (ind = 0; ind < numInt; ind++)
      { int aval;
        if (fscanf(fptr, "%d", &aval) != 1){printf("ERROR: Could not extract Set from file\n"); return -1;}
        setA[ind] = aval;  }
  fclose(fptr);
if (isValidSet(setA, numInt) == 1)
{ printf("FOUND: There are %d subsets whose sum equal to target value %d\n", subsetSum(setA, numInt, kval), kval); }
else {printf("NOT FOUND: Invalid set\n");}
free(setA);
  return 0;
}
