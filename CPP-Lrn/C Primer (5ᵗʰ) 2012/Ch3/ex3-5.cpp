#include<iostream>
#include<string>
 using namespace std; 

 int main()
{
string s1;
string fin = " ";
cout << "Enter a string or type 'ex1t' to quit the program." << endl;
for(;getline(cin, s1);)
{
if(s1 == "ex1t"){return 0;}
fin+=s1;
fin+=" ";
cout << fin << "\n" ; 

}
return 0;
}
