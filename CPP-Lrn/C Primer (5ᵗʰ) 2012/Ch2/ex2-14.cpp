#include<iostream>

using namespace std;

int i = 100;

int main()
{
int sum = 0;

for (int i = 0; i != 10; ++i)

sum += i;
std::cout << i << " " << sum << std::endl;


return 0;
}
//Yes the program is legal.
//since the for statement uses no block to contain its function:
// i will be printed as its global value 100
// sum will use i's nearest value(0) to print a calculation once of 45.
//final result is: 100  45 

