//Exercise 8.13

#include <stdio.h>

int main()
{
int x;
int y;

printf("Enter first value.\n");
scanf("%d",&x);
printf("Enter second value.\n");
scanf("%d",&y);


if(x > y){	printf("First value entered is bigger");	}

else if(x<y){	printf("Second value entered is bigger");	}

	else{	printf("First and Second values are equal");	}

}

