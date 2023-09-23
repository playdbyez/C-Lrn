#include<iostream>
#include<string>
 using namespace std; 

 int main()
{
char gig = 'X';
string s1("Imon tha 8eans 4real");


cout << s1 << endl;
for(auto &c : s1)
{
if(!isspace(c))
{c=gig;}
cout << s1 << endl;
}

return 0;
}
