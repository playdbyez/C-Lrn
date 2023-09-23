#include<iostream>
using namespace std;
 
int main()
{

//When using a const object to initialize another object, 
//the new object will lose the previous' const attributes like so:

int i = 42;
const int ci = i;   // ok: the value in i is copied into ci
int j = ci;         // ok: the value in ci is copied into j

for(;j<=50;++j)
{
cout << ci << endl;
}
//If compiled with i or j, the output will display a count of 9 entries from 42-50 
//if compiled with the constant ci, the output will display a count of 9 entries of value 42  






cout << "Break";

A single const object can also have shared access by multiple files files.
//To define a single instance of a const variable, we use the keyword extern on both its definition and declaration


extern const int buffSize = fcn();  
//Save file as C function:
// file_1.cc 


//extern const int buffSize; 
//Save file as C++ header:
// file_1.h



 return 0;
}
