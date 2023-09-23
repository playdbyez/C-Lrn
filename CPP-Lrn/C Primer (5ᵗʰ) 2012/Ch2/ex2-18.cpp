#include<iostream>
using namespace std;
 
int main()
{

int x;
int *p = &x;


*p = 10;
	cout << "\n*p now points at " << *p << " value." << endl;
	cout << x <<" value is at address: " << &x << endl;
	cout << "\nThe address of &p remains as: " << &p  << endl;
	
x=5;
	
	cout << "\n*p now points at " << *p << " value." << endl;
	cout << x <<" value is at address: " << &x << endl;
	cout << "\nThe address of &p remains as: " << &p  << endl;
	
		

return 0;
}
