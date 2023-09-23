#include<iostream>
#include<string>
#include<vector>
 using namespace std; 

 int main()
{
vector<int> v1;
vector<int> v2(10, 42);
vector<string> v3{10};


cout << "1st count:" << endl;
cout << v1.size() << endl;
cout << v2.size() << endl;
cout << v3.size() << endl;
//output: 0 / 10 / 10

v1 = v2;

cout << "2nd count:" << endl;
cout << v1.size() << endl;
cout << v2.size() << endl;
cout << v3.size() << endl;
//output: 10 / 10 / 10


return 0;
}
