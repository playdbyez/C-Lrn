//3.36 Vector and array comparison
#include <iostream>
#include <vector>
using namespace std;
int main()
{
int sz = 5;
int arr [sz] = {0,1,2,3,4};
int ar[sz] = {9,8,7,6,5};
bool comp = false;
int *p = arr;

cout << "Before\n";
for (;*p<sz; p++){if (ar[*p] == arr[*p]){comp = true;}}
						cout << "are both arrays equal ? ";
if (comp == true){cout << "\nyes";}
if (comp == false){cout << "\nno";}
						cout << "\n\n";


p = arr;
cout << "After";
for (;*p<sz; p++){ar[*p] = *p;if (ar[*p] == arr[*p]){comp = true;}}
						
						
						cout << "\n";
						cout << "are both arrays equal ? ";
if (comp == true){cout << "\nyes";}
if (comp == false){cout << "\nno";}





cout << "\n\n Vector comparison";

vector <int> g1= {0,1,2,3,4};
vector <int> g2= {0,1,2,3,4};

cout <<"\n";
cout << (g1 == g2) ? comp: comp;


cout << "\n\n Array re-comparison";

int gg1[]= {0,1,2,3,4};
int gg2[]= {0,1,2,3,4};

cout <<"\n";
cout << (gg1 == gg2) ? comp: comp;



cout << "\n\n Vector re-comparison";

vector <int> g11= {1,1,2,3,4};
vector <int> g22= {0,1,2,3,4};

cout <<"\n";
cout << (g11 == g22) ? comp: comp;

}
