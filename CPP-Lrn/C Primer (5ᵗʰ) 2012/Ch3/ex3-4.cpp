#include<iostream>
#include<string> 
 using namespace std; 

 int main()
{
typedef string ss;
ss t1;
ss t2;

cout << "enter a phrase: " << endl;
getline(cin,t1);
cout << "enter another phrase: " << endl;
getline(cin,t2);
if(t1 == t2){
cout << "Both phrases are the same." << endl;
}

if(t1.size() == t2.size()){
cout << "first phrase and second phrase are of equal lenght." << endl;
}

if (t1.size() < t2.size()){cout << t2 << "\nsecond phrase is longer" << endl;}
if (t1.size() > t2.size()){cout << "\nfirst phrase is longer" << endl;}


return 0;
}
