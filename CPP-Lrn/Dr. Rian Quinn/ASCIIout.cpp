#include<iostream>
 using namespace std; 

 int main(void)
{
int i = 0x42;	//8bit
char c = 0x42; //8bit

cout << i <<endl;  // 66
cout << c << endl; // B

return 0;
}

/*
this is because in C++ and C,
the type 'char' is output as its 'ASCII representation'.
therefore, char c's 8bit value is represented in ASCII upper case 'B' and arrays of 'char-Types' are considered 'ASCII' as well.
*/
