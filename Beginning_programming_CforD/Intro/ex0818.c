//Exercise 8.18
#include <stdio.h>

int main()
{
char code;

printf("Enter A, B or C\n");
printf("->");
scanf("%c", &code);
switch(code)
{
	case 'a':printf("lowercase 'a' detected");break;
	case 'A':printf("uppercase 'A' detected");break;
	case 'b':printf("lowercase 'b' detected");break;
	case 'B':printf("uppercase 'B' detected");break;
	case 'c':printf("lowercase 'c' detected");break;
	case 'C':printf("uppercase 'C' detected");break;
	default: printf("ERROR:Entry not recognised.");break;
									}
}
