#include<iostream>
using namespace std;
 
int main()
{
const int ci = 1024; //OK: int variable 'ci' cannot be altered.
const int &r1 =ci; //OK:But can't leave &r1 unInitialized because consts need to be initialized
r1 = 42; 	   //Error:Cannot assign a value to r1 because &r1 is const a const int.
int &r2 = ci;     //Error:Cannot assign a reference to 'ci' because 'ci' is part of a const int.

 return 0;
}
