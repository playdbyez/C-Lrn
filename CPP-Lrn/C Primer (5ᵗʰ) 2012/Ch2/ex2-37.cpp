#include<iostream>
 using namespace std; 

 int main()
{
int a = 3, b = 4; 	// 'a' is an int and 'b' is an int.
decltype(a) c = a; 	// 'c' is still an int.
decltype(a = a) d = a; // 'd' is an reference to value 'a' (&d)
decltype((a)) p = a;	// 'p' is also a reference to value 'a' (&p)
			// 'a', 'c', 'd' and 'p' = 3 while 'b' = 4.



cout << "d is: "<< d << " and c is: " << c << " and a is: " << a << " and p is: " << p <<endl;
++c;
cout << "now increased (a)c is: "<< c << " and a remains: " << a << endl;
++p;
cout << "now increased ((a))p is: "<< p << " and a changes to: " << a << endl;
++d;
cout << "now increased (a=a)d is: "<< d << " and a changes to: " << a << " due to ++p and ++d."<< endl;



/* 
In summary, 
> if a decltype object with 2 parethesized values gets altered,  
> the original value that the decltype copied will be changed.

Similarly,
> if a decltype object with 2 parathesis gets altered,
> the original value that the decltype copied will be changed.

Alternatively, 
> if a decltype object with 1 parenthesized value gets altered, 
> the original value that the decltype copied will remain unchanged.
*/


return 0;
}
