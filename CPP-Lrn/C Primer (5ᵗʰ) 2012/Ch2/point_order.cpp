#include<iostream>

using namespace std;

int nif = 12;
 
int main()
{

/* Understanding the order of pointers:
The order to which a value is declared in relation to a pointer
is extremely important as it relates to the way the compiler reads the code(Up2Down)
 
 

*/ 

int q = 21;int *p2 = &q;int o = *p2;  
int *p1 = &o;int **p0 = &p1; int &nif = **p0;**p0=*p2;int fin = *&nif; **p0=0;

cout << "\n\nmeW STUFF \n" << endl;

cout << fin << " " << *&nif  << " " << ::nif << endl;

//8 RELAY LINKS



 return 0;
}
