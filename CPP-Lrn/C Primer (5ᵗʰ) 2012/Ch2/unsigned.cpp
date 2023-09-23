#include<iostream>

using namespace std;

int main()
{
unsigned u = 10;
int i = -42;
std::cout << i + i << std::endl; // prints -84
std::cout << u + i << endl; // if 32-bit int ints, prints 4294967264

//My experiments bellow:
cout << "\nBREAK:" << endl;
cout << u - i << endl;
cout << u + -14 << endl;

unsigned y = -296; // prints 4294967264

cout << y << endl;

cout << "\nMore Experiments" << endl;
unsigned x = -4294967295; // long int <> unsigned int = unsigned 1
unsigned z = -4294967296; // long int <> unsigned int = unsigned 0


cout << x << endl;    // prints 1
cout << z << endl;    // prints 0
cout << z + 1 << endl; // prints 1


cout << z - 1 << endl; 
// should print -1 right? 
//--WRONG its 32bit address wraps back to the max value assigned to an unsigned int object
//Its max value being = a positive 10 digit number (bellow 4.3 billion)
}
