#include<iostream>

using namespace std;


int main()
{
	int sum = 0, val = 1;
	// while loop untill val is less than or equal to TEN
	while(val <=5)
	{
		sum += val; // assigns sum+ val to sum
		++val;	    // add 1 to val
	}
	cout << "Sum of 1 to 10 inclusive is " << sum << endl;
	return 0;
}
