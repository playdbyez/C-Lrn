#include<iostream>
#include<cstring>
 using namespace std; 

 int main()
{
//
//Hypothesis one
string s("some string");
string n("plus \nanother string");
if (!s.empty())
s[0] = toupper(s[0]);
cout << s << endl;

// output: Some string


//
//Hypothesis two
for (decltype(n.size()) index = 0;index != n.size() && !isspace(n[index]); ++index)
// process characters in s until we run out of characters or we hit a whitespace
n[index] = toupper(n[index]); // capitalize the current character
cout << n << endl;

// output: SOME string


//
//Hypothesis three
string s("Hello World!!!");
// convert s to uppercase
for (auto &c : s)
// for every char in s (note: c is a reference)
c = toupper(c); // c is a reference, so the assignment changes the char in s
cout << s << endl;
// location of first char in a string is always s[0] however the last char in a string can be found with s[s.size() - 1].

// output: HELLO WORLD!!!

return 0;
}
