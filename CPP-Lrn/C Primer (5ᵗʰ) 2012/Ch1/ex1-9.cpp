#include<iostream>

using namespace std;


int main ()
{

int i =50;
int j = 0;
int sum;

//my way lol

while(i <=100)
{


	sum = j + i;
	++i;
	cout << sum << endl;
	
}


//the correct way:
int k = 50;
while(k<=100)
{

	j+=k;
	++k;

}
cout << "now 50 to 100 inclusive':" << endl;
cout << j << endl;

return 0;
}
