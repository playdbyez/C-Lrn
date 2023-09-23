#include<iostream>
 using namespace std; 

 int main()
{

int a = 3, b = 4; 	// 'a' and 'b' are int.
decltype(a) c = a;	// 'c' is an int unaffected by 'a' or 'd'.
decltype((b)) d = a;	// 'd' is a reference to int 'a'

++d;
++c;
cout << "c is: "<< c << " and d is: " << d << endl;
cout << "while b remains: " << b << " a has changed to: " << a << endl;


return 0;
}



/*
when the code finishes:
c = 4 because of increament of ++d doesn't affect c.
d = 4 because the increment of ++c doesn't affect '&d' or 'int a'
a = 4 because of the increment of '&d'.
b = 4 because its unaffected.
*/

