//Initializing a vector from an array

#include <iostream>
#include <vector>
using namespace std;



int main ()
{
int numb[] = {1, 10, 11, 100};


vector <int> copied (begin(numb), end(numb));
vector <int> partial( numb +0, numb+4 );

for (auto c: copied)
{cout << c << " ";}

cout << "\n";

for (auto g: partial)
{cout << g << " ";}
}
