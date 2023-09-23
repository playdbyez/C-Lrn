//3.39

#include <iostream>
#include <cstring>
#include <string>
using namespace std;



int main ()
{
//string comparison

string aa = "Whoever";
string ab = "Whoever";
bool cp = aa == ab ? true:false;
cout << cp << " Equal";
//const char comparison

const char ba[] = "So what";
const char bb[] = "So what";

cout << "\n"<< strcmp(ba,bb) << " Equal";
}
