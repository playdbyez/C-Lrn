#include<iostream>

using namespace std;

int main()
{
int x = 0, y= 0;
int *c;
cin >> y >> x;
x += y;

cout << "sum is : " << x << endl;
cout << "Now continuos!!\n (t0 ex1t pl3a5e pre5s Ctrl+d)" << endl;

while(cin >> y)
{
*c = x+=y;cout << "continuous sum is " << *c << endl;
}
cout << "goodbye ^.^\n";
return 0;
}
