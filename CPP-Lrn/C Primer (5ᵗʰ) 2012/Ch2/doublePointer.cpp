#include<iostream>
using namespace std;
 
int main()
{
// Visualiser
//*pd2 > *pd > dval = 101.123


double dval = 101.1234;
// Object type double named "dval" is declared as "double 101.123".
double *pd = &dval; 
// Inner pointer "*pd" is pointing to the initializer "&dval" which is the address of a double.
double *pd2 = pd; 
// Outer pointer "*pd2" is pointing to the  initializer "pd" which is a pointer to a double.
double *pp;

cout << *pd2 << endl;
cout << *pd << endl;
cout << "Weirdness Insues \n" << endl;
cout << *pp << endl; 
cout << pd << endl;
cout << &dval << endl;
 return 0;
}
