//counts the ammount of characters inserted

#include<stdio.h>

int main ()
{
long int x = 0;

while(getchar() !=EOF) ++x;
printf("%ld", x);
}

//Output by (ctrl +d): amount of chars including null
