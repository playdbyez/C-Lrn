#include<iostream>
#include<map>
#include<string>
#include<iterator>

using namespace std;



int n;

int main ()
{
map<int,std::string> example;
	example.insert(std::make_pair(1,"a"));
	example.insert(std::make_pair(2,"b"));
	example.insert(std::make_pair(3,"c"));
	example.insert(std::make_pair(4,"d"));
	example.insert(std::make_pair(5,"e"));
	example.insert(std::make_pair(6,"f"));
	example.insert(std::make_pair(7,"g"));
	example.insert(std::make_pair(8,"h"));
	example.insert(std::make_pair(9,"i"));
	example.insert(std::make_pair(10,"j"));
	
	example.insert(std::make_pair(11,"k"));
	example.insert(std::make_pair(12,"l"));
	example.insert(std::make_pair(13,"m"));
	example.insert(std::make_pair(14,"n"));
	example.insert(std::make_pair(15,"o"));
	example.insert(std::make_pair(16,"p"));
	example.insert(std::make_pair(17,"q"));
	example.insert(std::make_pair(18,"r"));
	example.insert(std::make_pair(19,"s"));
	example.insert(std::make_pair(20,"t"));
	
	example.insert(std::make_pair(21,"u"));
	example.insert(std::make_pair(22,"v"));
	example.insert(std::make_pair(23,"w"));
	example.insert(std::make_pair(24,"x"));
	example.insert(std::make_pair(25,"y"));
	example.insert(std::make_pair(26,"z"));
 
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

