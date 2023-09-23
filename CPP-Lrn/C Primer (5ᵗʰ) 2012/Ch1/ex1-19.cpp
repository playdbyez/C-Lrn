#include<iostream>

using namespace std;


int main()
{
int i, j;
cout << "enter first digit : ";
cin >> i;
cout << "enter second digit : ";
cin >> j;
cout << "\nYour range is: " << endl;
if(i<=j)
{
	while(i<=j)
	{

	cout << i << endl;
	++i;
	}
}
else 
{
while(i>=j)
	{

	cout << i << endl;
	--i;
	}
}
return 0;
}
