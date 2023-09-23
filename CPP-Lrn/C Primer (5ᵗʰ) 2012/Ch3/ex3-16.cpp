
/*Exercise 3.16: 
Write a program to print the size and contents of the vectors from exercise bellow. 
Check whether your answers to that exercise were correct. If not, restudy p. 97 until you understand why you were wrong.

(a)vector<int> v1;
(b)vector<int> v2(10);
(c)vector<int> v3(10, 42);
(d)vector<int> v4{10};
(e)vector<int> v5{10, 42};
(g)vector<string> v6{10}; 
(f)vector<string> v7{10, "hi"};

*/


#include<iostream>
#include<vector>
#include<string> 
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

cout << "v1's size is "<< v1.size() << " integers"<<"\n";
 if(v1.empty()){ cout << "vector is empty. \n";}

cout << "v2's size is "<< v2.size() << " integers"<< "\n"; 
if(!v2.empty()){
for(int cnt = 0;cnt < v2.size(); ++cnt){cout << v2[cnt] << ", ";}}

cout<<endl;
cout << "v3's size is "<< v3.size() << " integers"<< "\n"; 
if(!v3.empty()){
for(int cnt = 0;cnt < v3.size(); ++cnt){cout << v3[cnt] << ", ";}}

cout<<endl;
cout << "v4's size is "<< v4.size() << " integer"<< "\n"; 
if(!v4.empty()){
for(int cnt = 0;cnt < v4.size(); ++cnt){cout << v4[cnt] << ", ";}}

cout<<endl;
cout << "v5's size is "<< v5.size() << " integers"<< "\n"; 
if(!v5.empty()){
for(int cnt = 0;cnt < v5.size(); ++cnt){cout << v5[cnt] << ", ";}}

cout<<endl;
cout << "v6's size is "<< v6.size() << " strings"<< "\n"; 
if(!v6.empty()){
for(int cnt = 0;cnt < v6.size(); ++cnt){cout << v6[cnt] << ", ";}}

cout<<endl;
cout << "v7's size is "<< v7.size() << " strings"<< "\n"; 
if(!v7.empty()){
for(int cnt =0;cnt < v7.size(); ++cnt){cout << v7[cnt] << ", ";}}

cout << "\n\n";
return 0;
}
