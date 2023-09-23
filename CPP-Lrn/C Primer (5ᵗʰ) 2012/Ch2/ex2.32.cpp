
/*
ex2.32
int null = 0, *p = null
*/




#include<iostream>
using namespace std;
 
int main()
{
int null = 0, *p = &null;
//or int *p = nullptr & cout << p 
//or int *p = NULL & cout << p

cout << *p << endl;

 return 0;
}

//The code was Ilegal as the pointer p  was of a different int than the variable null, although I think the original expercise meant to use the expression literal NULL instead. 
