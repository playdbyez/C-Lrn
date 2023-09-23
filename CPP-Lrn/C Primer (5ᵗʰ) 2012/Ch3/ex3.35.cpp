//3.35 Pointers Only
#include <iostream>
using namespace std;
int main()
{
int sz = 5;
int arr [sz] = {0,1,2,3,4};

int *p = arr;
int *q = arr;

for (; *p<sz; p++)
{arr[*p] = *q; cout << *p;}

}
