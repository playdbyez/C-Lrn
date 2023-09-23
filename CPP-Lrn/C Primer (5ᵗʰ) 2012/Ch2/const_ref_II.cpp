#include<iostream>
using namespace std;
 
int main()
{
int i = 42; 	    //Unlike 'ci' this int is plain and not const
int &r1 = i;
const int &r2 = i; //THIS const statement is unchangable since 'i' is an int on its own. 
r1 = 0;

cout << r2 << endl;
cout << i << endl;


 return 0;
}
