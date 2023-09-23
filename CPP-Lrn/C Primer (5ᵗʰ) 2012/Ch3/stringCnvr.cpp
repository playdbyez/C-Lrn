#include<iostream>
#include<cstring>
 using namespace std; 

 int main()
{
const string hexdigits = "0123456789ABCDEF";
// possible hex digits
cout << "\n\nEnter a series of numbers between 0 and 15"
<< " separated by spaces. Hit ENTER when finished: "
<< endl;
string result;			// will hold the resulting hexify’d string
string::size_type m; 		// hold numbers from the input
while (cin >> m)
if (m < hexdigits.size())	// ignore invalid input
result += hexdigits[m]; 	// fetch the indicated hex digit
cout << "Your hex number is: " << result << endl;

return 0;
}

// input 	12 0 5 15 8 15
// output 	C  0 5 F  8 F
