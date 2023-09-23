#include<iostream>
#include<map>
#include<string>
#include<iterator>

using namespace std;




int main ()
{

char n;
//use single quotes instead of double quotes for char search.
map<char,int> example;
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
	
	
	cout << "Enter Element for Search: ";
	cin >> n; 
	 		
	 		
	 		auto search = example.find(n);
	 		
	 			if(search != example.end())
	 			{
cout <<'\n'<< n << " found and its value is " << search->first << " = " << search->second << '\n';
	 			}
	 			
	 	else 
	 	{cout << n << " not found!";}
	}

