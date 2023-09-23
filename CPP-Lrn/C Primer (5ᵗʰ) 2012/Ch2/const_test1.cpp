#include<iostream>
using namespace std;
 
int main()
{
const int numbz = 0;

		if(numbz=0)
		{for(int i = 0; i <=10; ++i)
			{i+=numbz;
				cout << i << endl;}}
else
{++numbz;
cout << numbz << endl;}

 return 0;
}


// Error: An object type 'const' cannot be redeclared even as: 
//flow control parameter nor incremented.
// however if used for arithmetic without changes to its initialized value, it will compile.

