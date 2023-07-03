//1-8
#include <stdio.h>
#include <string.h>
int main ()
{
int tabs =0;
int spaces =0;
int newl =0;
char* x = "She grind on me she 	skating!\n";



printf("Text: \f %s", x);



for (size_t a = 0; a<strlen(x); ++a)
{
if (x[a] == '\t'){tabs++;}
if (x[a] == ' '){spaces++;}
if (x[a] == '\n'){newl++;}

}

printf("\n");
printf("tabs count: %5d \n", tabs);
printf("spaces count: %3d \n", spaces);
printf("new line count: %d \n", newl);
}
