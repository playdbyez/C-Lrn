#include <iostream>
#include <cstring>
#include <string>
using namespace std;


//strcmp seems to work only on const char arrays
int main ()
{
const char aa[] = "This is a string";
const char ab[] = "This is also a string";


cout << strcmp(ab,aa);
//positive value if the first const char[] is greater


cout << "\n"<< strcmp(aa,ab);
//negative value if the first const char[] is greater



const char ac[] = "This is a string";

cout << "\n"<< strcmp(aa,ac);
// 0 if both strings of char are equal
}
