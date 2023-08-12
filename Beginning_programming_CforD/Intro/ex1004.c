//Exercise 10-04
#include<stdio.h>

void grade (int count);  		// argument type must be declared with void function


int main()
{

int value = 2;

	while(value<=64)
	{
		grade(value);
		printf("Value is %d\n" , value);
		value = value * 2;
	}
return 0;

}

	void grade(int count)
	{
		
		for (int x =0; x<count; ++x, putchar('*'), putchar('\n'))
		;
		
	}
