//  Print the size and contents of each
#include <iostream>
#include <string>
#include <vector>
#include <iterator>


using namespace std;
int main()
{
vector<int> v1;
vector<int> v2(10);
vector<int> v3(10, 42);
vector<int> v4{10};
vector<int> v5{10, 42};
vector<string> v6{10}; 
vector<string> v7{10, "hi"};

for (auto it = v2.cbegin(); it != v2.cend(); it++)
{cout << *it ;}
cout << "\n";
for (auto it = v3.cbegin(); it != v3.cend(); it++)
{cout << *it << " " << &it << " ";}
cout << "\n";
for (auto it = v7.cbegin(); it != v7.cend(); it++)
{cout << *it << " " ;}

// too inusitated to print each.
return 0;
}
