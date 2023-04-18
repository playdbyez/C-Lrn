#include<stdio.h>



int sumTo(int max)
{
int i = 0;
int sum = 0;

	for(i = 1; i<=max; ++i)
		{sum+=1;}
		return sum;
}

int main(int argc, char** argv) 
{
printf("sumTo(5) is: %d\n" , sumTo(5));
}
//if sum = sum + 1
//1+1  (i =2)
//2+1  (i =3)
//3+1  (i =4)
//4+1  (i =5)


//if sum = sum+i
//1+2
//3+3
//6+4
//10+5
