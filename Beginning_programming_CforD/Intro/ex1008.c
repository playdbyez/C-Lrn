//Exercise 10-08
#include <stdio.h>


void getn (int cnt, char img);


int main ()
{

int val = 0;
int ot = 1;
int shw = 0;
char n = '#';

while (shw < 300)
{

printf("%d\n", val);
val+=ot;
shw = ot;
getn(shw,n);
printf("%d\n",ot);
ot+=val;
shw = val;
getn(shw,n);
}


}


void getn(int cnt, char img)
{
if (cnt < 300)
for(int x =0; x < cnt; ++x,printf("%c",img))
;
}
