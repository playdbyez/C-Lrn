#include<iostream>
using namespace std;
 
int main()
{
cout << "\n\nThe key differences between a reference and a pointer are.. \n" << endl;

cout << "\tA Reference (&i):is not an object. It is an alias of another object.\n\n" << endl;
cout << "can be declared as a reference to other already initialized objects; " << endl;
cout << "can only be initialized to an object not int numbers." << endl;
cout << "can be initialized to an pointer; " << endl;
cout << "can also be an pointer's initializer; " << endl;
cout << "has to interact with the objects of the same type" << endl;

cout << "\n\tA Pointer (*i):is an object whose value is the adress of another object.\n\n" << endl;
cout << "can point to a non-initialized location; " << endl;
cout << "can point to an object not in numbers; " << endl;
cout << "can point to an reference; " << endl; 
cout << "has to interact with objects of the same type" << endl;



 return 0;
}
