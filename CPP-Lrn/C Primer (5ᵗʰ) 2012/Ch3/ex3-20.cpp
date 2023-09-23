#include<iostream>
#include<string>
#include<vector>
 using namespace std; 

void adjc(){
cin.ignore();

vector<int> v1(4);
int k = 0;
cout << "instert 4 digits in a row \n";
for(int i = 0; i < 4; ++i)
{cin >> v1[i];}


cout << "\nResults: \n";
for(int l = 0; l < v1.size(); ++l)
{
++k;
int j = v1[l]+v1[k];
if(v1[k] != 0)
cout << j << endl;
}
/*
// alternative to the 'for loop' as the output
// which results in an uneven ammount of results 
// if the entries are at an even total  
int fs = v1[0] + v1[1];
int st = v1[1] + v1[2];
int tf = v1[2] + v1[3];
cout << fs << endl;
cout << st << endl;
cout << tf << endl;
*/
					}

void fstlas(){
cin.ignore();
vector<int> v2(4);
int t = v2.size();
cout << "instert 4 digits in a row \n";

for(int i = 0; i < v2.size(); ++i)
{cin >> v2[i];}
cout << "\nResults: \n";
for(int f = 0; f < v2.size()/2; ++f)
{--t;
int r = v2[f]+v2[t];

cout << r << endl;
}

}


 int main()
{
int g;
cout << "Select an opt: \n";
cout << "[1] Adjacent Sum\n";
cout << "[2] Symmetric Sum\n";
cout << "[0] Exit\n";

cout << "->";
cin>> g;


switch(g)
{
case 0:return 0;break;
case 1:adjc();break;
case 2:fstlas();break;
default: break;
}

return 0;
}






