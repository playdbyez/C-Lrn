#include<iostream>
#include<vector>
#include<string>
 using namespace std; 

 int main()
{
string s;
int g=0;
int l=0;
vector<string> pha;

cout << "\nStore a phrase \f 0R \f Type in 'ex1t' to exit \n";
while(true){
if(getline(cin,s)) 
{if(s != "ex1t")
++l;
pha.push_back(s);}
if(s == "ex1t"){ break;}
}
cout << "\n\n";
for( ;g < l; ++g){cout << pha[g] << "\n";}
cout <<"\n"<< l << " sentences stored!\n";
return 0;
}
