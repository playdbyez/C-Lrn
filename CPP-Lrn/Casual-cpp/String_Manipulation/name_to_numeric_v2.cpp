#include<iostream>
#include<map> 
#include<cmath>
 using namespace std; 

 int main()
{
cout << " ENTER \fA \fNAME "<<endl;
cout << "name:";
string name;
int sum =0;
int count = 0;
//if (cin >> name){
if(getline(cin, name)){
map<char,int> example;


	example.insert(std::make_pair('A',1));
	example.insert(std::make_pair('B',2));
	example.insert(std::make_pair('C',3));
	example.insert(std::make_pair('D',4));
	example.insert(std::make_pair('E',5));
	example.insert(std::make_pair('F',6));
	example.insert(std::make_pair('G',7));
	example.insert(std::make_pair('H',8));
	example.insert(std::make_pair('I',9));
	example.insert(std::make_pair('J',10));
	
	example.insert(std::make_pair('K',11));
	example.insert(std::make_pair('L',12));
	example.insert(std::make_pair('M',13));
	example.insert(std::make_pair('N',14));
	example.insert(std::make_pair('O',15));
	example.insert(std::make_pair('P',16));
	example.insert(std::make_pair('Q',17));
	example.insert(std::make_pair('R',18));
	example.insert(std::make_pair('S',19));
	example.insert(std::make_pair('T',20));
	
	example.insert(std::make_pair('U',21));
	example.insert(std::make_pair('V',22));
	example.insert(std::make_pair('W',23));
	example.insert(std::make_pair('X',24));
	example.insert(std::make_pair('Y',25));
	example.insert(std::make_pair('Z',26));



	example.insert(std::make_pair('a',1));
	example.insert(std::make_pair('b',2));
	example.insert(std::make_pair('c',3));
	example.insert(std::make_pair('d',4));
	example.insert(std::make_pair('e',5));
	example.insert(std::make_pair('f',6));
	example.insert(std::make_pair('g',7));
	example.insert(std::make_pair('h',8));
	example.insert(std::make_pair('i',9));
	example.insert(std::make_pair('j',10));
	
	example.insert(std::make_pair('k',11));
	example.insert(std::make_pair('l',12));
	example.insert(std::make_pair('m',13));
	example.insert(std::make_pair('n',14));
	example.insert(std::make_pair('o',15));
	example.insert(std::make_pair('p',16));
	example.insert(std::make_pair('q',17));
	example.insert(std::make_pair('r',18));
	example.insert(std::make_pair('s',19));
	example.insert(std::make_pair('t',20));
	
	example.insert(std::make_pair('u',21));
	example.insert(std::make_pair('v',22));
	example.insert(std::make_pair('w',23));
	example.insert(std::make_pair('x',24));
	example.insert(std::make_pair('y',25));
	example.insert(std::make_pair('z',26));

example.insert(std::make_pair(' ' ,NULL));	

for (auto i : name)
{
auto search = example.find(i);
sum+=search->second;
if (search->second != NULL)
count++;
cout << search->first <<" = " <<search->second<<endl;
}
cout << "Total ammount of characters: " << count << endl;
//cout << "Total sum of each: "<< sum<<endl;	
}
return 0;
}
