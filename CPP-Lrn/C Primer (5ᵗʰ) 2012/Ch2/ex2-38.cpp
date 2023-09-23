//auto ignores the types reference or a const except the basic type itself

//while decltype will copy every aspect of the type it copies 


#include<iostream>

using namespace std;

int main ()
{

//Similar copied type different resulting values.
const int t = 10;

auto y = t; 		// 'y' becomes just int.
decltype(t) x = 9;	// 'x' becomes const int that needs initializer.

cout << "\n\nDifferent types" << endl;
y = 9;
cout << "auto "<< y << " should've been a const 10"<< endl;
cout << "decltype " << x << " infact is a const but as a 9" << endl;
cout << "\n" << endl;

int m = -5, &n = m;
auto k = n;		// 'k' becomes just int.
decltype(n) l = m;	// 'l' becomes &int that needs initializer.
k=2;
cout << "auto "<< k << " should've been an &int -5"<< endl;
cout << "decltype " << l <<" is an &int -5"<< endl;








//similar copied type similar resulting values.
unsigned int i = 5;

auto a = i;		// 'a' is unsingned int invalid value.
decltype(i) b;		// 'b' is unsigned int invalid value.

cout << "\n\nSimilar types" << endl;

a=-5;
b=-5;
cout << "auto "<< a << " is an unsigned -5"<< endl;
cout << "decltype " << b << " is an unsigned -5"<< endl;

}
