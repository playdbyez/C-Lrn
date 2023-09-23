#include<iostream>
#include<string>
 using namespace std; 

 int main()
{
string pt;
auto c = 0;
string dt;
int aftr = pt.size();
decltype(pt.size()) punct_cnt = 0;



cout << "Insert phrase:\n";

if(getline(cin,pt)){

while(c<pt.size()){
		dt = pt[c];
		if (!ispunct(pt[c])){cout << dt;}
		

		if (ispunct(pt[c])){++punct_cnt;}
		c++;
							}
cout <<"\n" << punct_cnt << " punctuation characters removed.\n";
											}
return 0;
}
