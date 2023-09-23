#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
 
int main()
{
const int buffSize = 512;

buffSize = 500; // Error : a constant object cannot be changed or redeclared elsewhere
		// as its regarded as a 'read-only variable'

const int i = get_size();  // ok: initialized at run time
const int j = 42;          // ok: initialized at compile time
const int k;               // error: k is uninitialized const


 return 0;
}
