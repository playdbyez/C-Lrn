#include<iostream>
#include<vector>
#include<string> 
 using namespace std; 

 int main()
{
//Integer example
vector<int> v2; // empty vector
for (int i = 0; i != 100; ++i)
v2.push_back(i);// append sequential integers to v2
// at end of loop v2 has 100 elements, values 0 . . . 99


//String example
string word;
vector<string> text;				// empty vector
while (cin >> word) {text.push_back(word);} // append word to text
// read words from the standard input and store them as elements in a vector


return 0;
}
