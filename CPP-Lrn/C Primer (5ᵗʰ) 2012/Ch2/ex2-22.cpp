#include<iostream>
using namespace std;
 
int main()
{
cout << "if (p) // ..." << endl;
cout << "in this instance the reference address of p or what *p points at is being used as an argument" << endl;

cout << "if (*p) // ..." << endl;
cout << "in this instance the value of *p or the value of what *p points to is being used as an argument" << endl;



/*Answer:

`if (p)` means if the pointer `p` is not null.

`if (*p)` means if the object pointed by the pointer is not false (which means the object is not null or zero etc.).
*/



return 0;
}
