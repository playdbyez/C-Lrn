//CONSTANT POINTERS: allways pointing

#include<iostream>
using namespace std;
 
int main()
{
double errNumb = 0 ;
double *const curErr = &errNumb; // curErr will ALWAYS point to errNumb
const double pi = 3.14159;
const double *const pip = &pi; // pip is a const pointer to a constant object

errNumb = *&pi;     // output is 3.14159
errNumb = pi * 2;   // output is 6.28318 (tau)
errNumb = *pip;     // output is 3.14159
cout << errNumb << endl;
 return 0;
}
