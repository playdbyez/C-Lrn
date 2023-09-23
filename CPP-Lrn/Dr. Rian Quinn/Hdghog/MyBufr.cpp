#include<iostream>
#include<string>
#pragma pack(push, 1)
 using namespace std; 

struct mystruct 
{
uint16_t data1;
uint64_t data2;
};
#pragma pack(pop)

 int main()
{
char name[5];
char *sin = name;
cout << "Enter Name:\n";
cin>>sin;
cout << "Hello " << name << endl;
cout << sizeof(name) << endl;
cout << sizeof(sin) << endl;
return 0;
}
