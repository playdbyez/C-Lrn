//Exercise 7.18

#include <stdio.h>

int main()
{
char fstname[20];
char lstname[20];

printf("Enter first name. \n");

fgets(fstname,20,stdin);


printf("Enter last name. \n");

fgets(lstname,20,stdin);

printf("\nHi! \nIts nice to meet you %s%s\n",fstname,lstname);

}
