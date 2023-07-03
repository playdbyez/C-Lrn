//Exercise 7.4

#include <stdio.h>

int main()
{
printf("Im waiting for 3 characters...\n");
printf("Character one:");
char a;
scanf("%c",&a);

printf("Character two:");
char b;
scanf("%c",&b);

printf("Character three:");
char c;
scanf("%c",&c);

printf("I was waiting for '%c', '%c' and '%c'.\n",a,b,c);


//OUTPUT
//a '' b
//Enter key doesn’t end stream input. 
//It merely rides along in the stream, like any other character.
}
