//cstring.h header

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
char ca[] = {'C', '+', '+', '\0'};
cout << strlen(ca) << "\n"; 		// returns 3 as the null pointer isnt counted

/*

strlen(p) = lenght of string p.
strcmp(p1,p2) =  returns 0 if p1 ==p2 / returns 1 if p1>p2 / returns -1 if p1<p2
strcat(p1,p2) =  p1+=p2 and returns p1 (appends p2 to p1)
strcpy(p1,p2) =  p1+=p2 and returns p1 (copies p2 into p1)
*/
}
