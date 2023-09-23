#include<iostream>
using namespace std;
 
int main()
{

double dval = 3.14;    //OK: although type differs from const.
const int &ri = dval;  //OK: will ensure dual becomes int instead of double.


cout << dval << endl;
 return 0;
}

//Const sel-corrects object type discrepancies by creating a temporary variable
//that matches its const type.
//for example:

//dval=3.14;
//const int TEMP = dval; (:Temporary:)
//const int &r1 =dval


