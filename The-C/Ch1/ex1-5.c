//1-5

#include <stdio.h>

int main()
{

int ff =0;
int cc = 0;

int max = 300;
int jump = 30;


for(ff = max; ff >= 0;ff -=jump){
cc = 5*(ff-32) / 9;
printf("%3d %5d \n", ff, cc);
 
 }
}
