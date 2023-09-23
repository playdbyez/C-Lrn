//Arrays (Eternal Pointer to First Element)
//elements within it are objects,
//compiler often converts it to a pointer,
//No need to exclusively use the reference operator (&)

#include<iostream>
#include<string>

using namespace std;

int main ()
{
constexpr size_t cn =10;
int arr[cn];


for(int it = 0; it < cn; it++)
{arr[it] = it;cout << arr[it];}

}

//string *p = &arr[0]; // p = arr[0];
//string *p2 = arr; 	// p2 = &arr[0];
//These kinds of declarations are then possible within an array
