//3.40

#include <iostream>
#include <cstring>
#include <string>
using namespace std;



int main ()
{

const char ba[] = {"Whoever"};
const char bb[] = {"Wherever"};

char larger[strlen(ba)+ strlen(bb)] ;

strcpy(larger, ba);
strcat(larger, " ");
strcat(larger, bb);

cout << larger;




// With string declaration + function c_str();
//This can only be achieved with a pointer to c_str()

string s = "Whenever";
string ss= "However!";
const char *aa= s.c_str() ;
const char *ab= ss.c_str();

char largest[strlen(aa) + strlen(ab) + strlen(ba)+ strlen(bb) ];

strcpy(largest,ba);
strcat(largest, " ");
strcat(largest, bb);
strcat(largest, " ");
strcat(largest, aa);
strcat(largest, " ");
strcat(largest, ab);


cout << "\n"<< largest;


//strcopy will replace the whole string with a selected copy 
//strconcatenate will append the selected string to the target

}
