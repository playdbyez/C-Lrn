#include<iostream>
#include<map>
#include<string>
#include<iterator>

using namespace std;




int main ()
{
string name;

cout << "Enter one name: ";

cin >> name;
int bb = name.size();
char ai = name[0];
char be = name[1];
char ce = name[2];
char de = name[3];
char ee = name[4];
char ef = name[5];
char ge = name[6];
char aga= name[7];
char ii = name[8];
char jay = name[9];
char kei = name[10];
char el = name[11];


//use single quotes instead of double quotes for char search.
map<char,int> example;
//lower-case
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
//upper-case
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
	 
	 		
	 		
auto searchai = example.find(ai);
auto searchbe = example.find(be);
auto searchce = example.find(ce);
auto searchde = example.find(de);
auto searchee = example.find(ee);
auto searchef = example.find(ef);
auto searchge = example.find(ge);
auto searchaga = example.find(aga);
auto searchii = example.find(ii);
auto searchjay = example.find(jay);
auto searchkei = example.find(kei);
auto searchel = example.find(el);
cout << "\nTotal ammount of characters: " << bb << endl;

	if(searchai != example.end())
	 			{cout << ai << " = " << searchai->second << endl;}
	if(searchbe != example.end())
	 			{cout << be << " = " << searchbe->second << endl;}
	if(searchce != example.end())
	 			{cout << ce << " = " << searchce->second << endl;}
	if(searchde != example.end())
	 			{cout << de << " = " << searchde->second << endl;}
	if(searchee != example.end())
	 			{cout << ee << " = " << searchee->second << endl;}
	if(searchef != example.end())
	 			{cout << ef << " = " << searchef->second << endl;}
	if(searchge != example.end())
	 			{cout << ge << " = " << searchge->second << endl;}
	if(searchaga != example.end())
	 			{cout << aga << " = " << searchaga->second << endl;}
	if(searchii != example.end())
	 			{cout << ii << " = " << searchii->second << endl;}
	if(searchjay != example.end())
	 			{cout << jay << " = " << searchjay->second << endl;}
	if(searchkei != example.end())
	 			{cout << kei << " = " << searchkei->second << endl;}
	if(searchel != example.end())
	 			{cout << el << " = " << searchel->second << endl;}
	 	
	
return 0;
	}

