



#include<iostream>
#include<string>
 using namespace std; 


//WHILE LOOP
void whl(){
	char gig = 'x';
	string s1("Imon tha beans 4real");
	int siz = s1.size(); 
	auto i = 0;
	cout << s1 << endl;
	while(i < siz)
	{if(!isspace(s1[i]))
	{s1[i] = gig;}
	++i;
	}
	cout << s1<< endl;}


//FOR LOOP
void fr(){
char gil = '+';
string s2("Imon da le4n fo'real");
int sil = s2.size(); 
cout << s2 << endl;
for(int j =0; j < sil; ++j)
{if(!isspace(s2[j]))
s2[j] = gil;
}
cout << s2<< endl;
				}



 int main()
{
int x;
cout << "Select an Option:\n";
while(true){
cout << "[1] While \n[2] For\n[0] Exit\n";
cout << "->";
cin >> x;


switch(x){
case 1: whl();break;
case 2: fr();break;
case 0: return 0;
default:break;
};
}
return 0;
}
