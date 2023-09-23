#include<iostream>
#include<vector>
#include<string>
 using namespace std; 

 int main()
{
int ent;
int g=0;
int l=0;
vector<int> vil;

cout << "\nStore numbers \f 0R \f Press dot(.) key to exit \n";
while(cin>>ent){
 
if(!ispunct(ent))
{++l;
vil.push_back(ent);
if(ispunct(ent)){ break;}}
}

for( ;g < l; ++g){cout << vil[g] << ", ";}
cout <<"\n"<< vil.size() << " elements stored!\n";
return 0;
}
