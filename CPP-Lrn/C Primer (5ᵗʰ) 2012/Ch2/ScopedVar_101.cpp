#include<iostream>

using namespace std;


int k = 99;
int main()
{
int n=0;
int m=0;
int l=0;

cout<< "OUTSIDE VAR: " << endl;

for(int k=0;k<10;k++){
m+=k;

cout << m << " & "<< ::k << endl;

// If statement s within a block & k is scoped to global(outside main):

// Statement function works as intended and prints EVERY.
// Arithmetic calc uses local var k in order to be COMPOUND-INCREMENTED & printed.
// Global var k is printed by EVERY arithmetic result.

}

									cout<< "\t\t\tDifferent Calc:\n\n" << endl;



									for(int k=0;k<10;k++){
									n+=k;

									cout <<"\t\t\t"<< n << " & "<< k << endl;

									// If statement is within a block:

									// Statement function works as intended and prints EVERY.
									// Arithmetic calc uses local var k in order to be COMPOUND-INCREMENTED & printed.
									// Global var k becomes local var k in order to be INCREMENTED & printed.
									}










for(int k=0;k<10;k++)
l+=k;
cout<< "Next Different Calc:\n\n" << endl;
cout <<"\t"<< l << endl;
cout <<"\t"<< k << endl;

// If statement is not within a block:

// Statement function gets IGNORED.
// Arithmetic calc will look for "k"'s NEAREST value.
// Global var k takes priority when printed 

return 0;
}
