#include<iostream>
#include<sstream>
#include<string>
using namespace std;


int returnVal (char x)
{
	return (int) x - 96;
}

			int main ()
{
char x;
cin >> x;

cout << returnVal(x) << "\n";

}

//For further support head over to:
//https://stackoverflow.com/questions/21832886/converting-letters-to-numbers-in-c/
