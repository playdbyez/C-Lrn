//Casting 
//assigning a different type to a value
//Defined in either C, old C++ or C++17
 
//Syntax of old convention
// variable-name = ( data-type ) variable-name;

//Syntax of new convention
//variable-name = static_cast < data-type > variable-name;

#include<iostream>

using namespace std;
int main()
{

char let = 'A';

int num = 97; // 97 in ASCII is lowercase a in decimal

char le = static_cast<char>(num);

int el = ','; // 44 in ASCII

cout << le;
cout << "\n";
cout << el << "\n";

//in division the result will often be "truncated" instead of "rounded",
// I.E. 9.999 as a result will return an int of value 9 instead of 10

int resu = 7/2;
// result is truncated
float result = static_cast < float > ( 7 ) / 2 ;
// OK :: the new type is cast to 7 before arithmatic operation.
float lt = static_cast < float > ( 7  / 2 ) ; 
// INVALID :: the arithmetic gets evaluated before casting a new type


cout << resu << " \n" << result << "\n " << lt << " \n";
}
