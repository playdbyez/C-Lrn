#include<stdio.h>

int main(){

int far, step, limit, start;
double cel;
step = 20;
limit = 300;
start =0;

far=start;

while(far<=limit)
{
cel = 5.0* (far-32)/9.0;
//printf("%d fahrenheit  equals  %d  celsius\n", far ,cel); // output d if cel equals int
printf("%3d fahrenheit  equals  %3.1f  celsius\n", far ,cel); // width of 3 digits for the output
far+=step;
}
}
