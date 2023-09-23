#include <iostream>
#include <fstream>
using namespace std;
int main()
{


fstream newv;

if(!newv)
{

cout<<"Error creating file\n";

}
else
{

newv.open("rename_me.cpp",ios::out);
newv<<"#include<iostream>\nusing namespace std;\n \nint main()\n{\n\n return 0;\n}"; 

newv.close();

cout<<"New file created\n";
}
return 0;
}
