#include<iostream>
#include<vector>
#include<string>
 using namespace std; 

 int main()
{
vector<int> von(3);			// von has 3 elements with value 0
vector<int> won;			// initially empty
vector<vector<char>> tuu;		// initially empty



vector<string>tie{10};			// tie has 10 default-initialized elements
vector<string>tee{10, "hi"}; 		// tee has 10 elements with value "hi"
vector<string> tre{"a", "an", "the"};	// list initialization

vector<int> seo{10};			// seo has 1 element, initialized to 10
vector<int> sero(10);			// sero has 10 elements, initialized to 0
vector<int> sis(10, 1);		// sis has 10 elements with value 1
vector<int> sol{10, 1}; 		// sol has 2 elements with values 10 and 1

vector<string> fur = tre;		// copy elements of tre into fur
vector<vector<char>> fin(tuu);	// copy elements of tuu into fin

//vector<string> svec = won;		//error: mismatching type from int to string

cin >> von[0];

cout << sero[1] << "\n";
cout << seo[0] << "\n";
cout << von[1] << "\n";
cout << von[0] << "\n";
return 0;
}




