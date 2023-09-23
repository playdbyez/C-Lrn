#include <iostream>

using namespace std; 


int main()
{
// int X will keep track of which number we are counting.
// int Y will hold each number as we read it from the input.


int x = 0;  // x is the number Im counting.
int y = 0;  // y reads new values into itself.


if (cin>>x)
{
int cnt = 1; // cnt stores the count for the current value processed.



	while (cin >> y) 
	//reads the remaining numbs.
	
	{
	if(y == x)  // if values are the same.
	++cnt;      // add 1 to cnt
	
	else {
	cout << x << " occurs " << cnt << " times." << endl;
	//otherwise print the count for previous value.
	 
	x = y;   // remember new value.
	cnt = 1; // rseset the counter of cnt.
	}
	}
	// prints the count for the last value in the file
	cout << x << " occurs " << cnt << " times." << endl;
}

return 0;
}

