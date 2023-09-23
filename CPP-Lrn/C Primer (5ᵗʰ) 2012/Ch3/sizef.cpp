#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
int v;
short int val;
long int lav;

unsigned lv;
short unsigned lvl;
long unsigned lil;

char l;
bool ll;
string lik;
vector <int> vec;
cout << "\nint:\n";

cout << sizeof(v);
cout << "\n"; 
cout << sizeof(val);
cout << "\n"; 
cout << sizeof(lav);

cout << "\nUnsigned:\n";

cout << sizeof(lv);
cout << "\n"; 
cout << sizeof(lvl);
cout << "\n"; 
cout << sizeof(lil);
cout << "\n"; 
cout << "\nchar:\n";
cout << sizeof(l);
cout << "\n";
cout << "\nbool:\n"; 
cout << sizeof(ll);
cout << "\n";
cout << "\nstring:\n"; 
cout << sizeof(lik);
cout << "\n";
cout << "\nempty vector:\n"; 
cout << sizeof(vec);
cout << "\n";


}
