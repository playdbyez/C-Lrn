#include<iostream>
#include<vector>
#include<string>
 using namespace std; 

 int main()
{

// Convert v to square
vector<int> v{1,2,3,4,5,6,7,8,9};
for (auto &i : v)	// for each element in v (note: i is a reference)
i *= i;		// square the element value
for (auto i : v)	// for each element in v
cout << i << " "; 	// print the element
cout << endl;



// Convert s to uppercase
string s("Hello World!!!");
for (auto &c : s)	// for every char in s (note: c is a reference)
c = toupper(c); 	// c is a reference, so the assignment changes the char in s
cout << s << endl;



return 0;
}
