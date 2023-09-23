#include<iostream>

using namespace std;


int main ()
{

int i;
int j;
int sum;

cout << "enter a starting range number: ";

cin >> i;

cout << "enter an ending range number: ";

cin >> j;

while(i<j)
{
	++i;
	cout << i << endl; 
	
}
	
	
while(i>j)
	{
	--i;
	cout << i << endl;
	
	}

return 0;
}
