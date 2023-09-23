#include <iostream>
#include <string>

using namespace std;

int main()
{


string in;

if(getline(cin,in)){}

for (size_t i =0; i < in.length(); i++){

if (isalpha(in[i])) {cout << "Non-numeric entry detected!" <<endl; return -1;}
}

unsigned long long nu = stoull(in);

if (nu % 2 == 0) {cout << "Even!\n";}
else{cout << "Odd!\n";}

//cout << nu;
}
