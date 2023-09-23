

//Ternary Operator 
//Assigns the value of 1 of two variables to a third variable depending on the condition
//Formula: 
//( test-expression ) ? if-true-return-this : if-false-return-this ;

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
vector <int> acog {40, 20,30};
sort(acog.begin(), acog.end());

bool first = (acog[0] == 30)? true:false;

cout << "Is the first value of my vector 30 ?\n" << first << "\n";




//test if input is odd or even

int c;
bool val;
string result;
cout << "insert a number: ";
cin >> c;

//is val odd?
val=(c%2!=0) ? 1:0;

if(val == 1){ result = "ODD";}
if(val == 0){ result = "EVEN";}


cout << "The number entered is: "; 
cout << result << "\n";



return 0;
}
