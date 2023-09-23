
#include<iostream>
#include<iterator>
#include<map> 
#include<string> 
 using namespace std; 

void sheet()
{
cout << "CONVERSION \fSHEET\n"<<endl;
cout << "- CHARACTERS -"<<endl;
cout << "'A' = .-"<<endl;
cout << "'B' = -..."<<endl;
cout << "'C' = -.-."<<endl;
cout << "'D' = -.."<<endl;
cout << "'E' = ."<<endl;
cout << "'F' = ..-."<<endl;
cout << "'G' = --."<<endl;
cout << "'H' = ...."<<endl;
cout << "'I' = .."<<endl;
cout << "'J' = .---"<<endl;
cout << "'K' = -.-"<<endl;
cout << "'L' = .-.."<<endl;
cout << "'M' = --"<<endl;
cout << "'N' = -."<<endl;
cout << "'O' = ---"<<endl;
cout << "'P' = .--."<<endl;
cout << "'Q' = --.-"<<endl;
cout << "'R' = .-."<<endl;
cout << "'S' = ..."<<endl;
cout << "'T' = -"<<endl;
cout << "'U' = ..-"<<endl;
cout << "'V' = ...-"<<endl;
cout << "'W' = .--"<<endl;
cout << "'X' = -..-"<<endl;
cout << "'Y' = -.--"<<endl;
cout << "'Z' = --.."<<endl;

cout << "\n- NUMBERS -"<<endl;
cout << "'0' = -----"<<endl;
cout << "'1' = .----"<<endl;
cout << "'2' = ..---"<<endl;
cout << "'3' = ...--"<<endl;
cout << "'4' = ....-"<<endl;
cout << "'5' = ....."<<endl;
cout << "'6' = -...."<<endl;
cout << "'7' = --..."<<endl;
cout << "'8' = ---.."<<endl;
cout << "'9' = ----."<<endl;

	cout << "\n- SIGNALS -"<<endl;
	cout << "'ROGER' = ...-." << endl;
	cout << "'WAIT' = .-..." << endl;
	cout << "'OVER' = -.-" << endl;
	cout << "'ERROR' = ........" << endl;
	cout << "'START' = -.-.-" << endl;
	cout << "'END' = ...-.-" << endl;


};


void phrase(){
cin.ignore();
string name;
int count = 0;
cout << " TRANSLATE \f2 \fCHARACTER "<<endl;
cout << "->";
if(getline(cin, name)){}
map<char,string> example;

//upper-case
	example.insert(std::make_pair('A',".-"));
	example.insert(std::make_pair('B',"-..."));
	example.insert(std::make_pair('C',"-.-."));
	example.insert(std::make_pair('D',"-.."));
	example.insert(std::make_pair('E',"."));
	example.insert(std::make_pair('F',"..-."));
	example.insert(std::make_pair('G',"--."));
	example.insert(std::make_pair('H',"...."));
	example.insert(std::make_pair('I',".."));
	example.insert(std::make_pair('J',".---"));
	
	example.insert(std::make_pair('K',"-.-"));
	example.insert(std::make_pair('L',".-.."));
	example.insert(std::make_pair('M',"--"));
	example.insert(std::make_pair('N',"-."));
	example.insert(std::make_pair('O',"---"));
	example.insert(std::make_pair('P',".--."));
	example.insert(std::make_pair('Q',"--.-"));
	example.insert(std::make_pair('R',".-."));
	example.insert(std::make_pair('S',"..."));
	example.insert(std::make_pair('T',"-"));
	
	example.insert(std::make_pair('U',"..-"));
	example.insert(std::make_pair('V',"...-"));
	example.insert(std::make_pair('W',".--"));
	example.insert(std::make_pair('X',"-..-"));
	example.insert(std::make_pair('Y',"-.--"));
	example.insert(std::make_pair('Z',"--.."));

//numeric
	example.insert(std::make_pair('1',".----"));
	example.insert(std::make_pair('2',"..---"));
	example.insert(std::make_pair('3',"...--"));
	example.insert(std::make_pair('4',"....-"));
	example.insert(std::make_pair('5',"....."));
	example.insert(std::make_pair('6',"-...."));
	example.insert(std::make_pair('7',"--..."));
	example.insert(std::make_pair('8',"---.."));
	example.insert(std::make_pair('9',"----."));
	example.insert(std::make_pair('0',"-----"));


//lower-case
	example.insert(std::make_pair('a',".-"));
	example.insert(std::make_pair('b',"-..."));
	example.insert(std::make_pair('c',"-.-."));
	example.insert(std::make_pair('d',"-.."));
	example.insert(std::make_pair('e',"."));
	example.insert(std::make_pair('f',"..-."));
	example.insert(std::make_pair('g',"--."));
	example.insert(std::make_pair('h',"...."));
	example.insert(std::make_pair('i',".."));
	example.insert(std::make_pair('j',".---"));
	
	example.insert(std::make_pair('k',"-.-"));
	example.insert(std::make_pair('l',".-.."));
	example.insert(std::make_pair('m',"--"));
	example.insert(std::make_pair('n',"-."));
	example.insert(std::make_pair('o',"---"));
	example.insert(std::make_pair('p',".--."));
	example.insert(std::make_pair('q',"--.-"));
	example.insert(std::make_pair('r',".-."));
	example.insert(std::make_pair('s',"..."));
	example.insert(std::make_pair('t',"-"));
	
	example.insert(std::make_pair('u',"..-"));
	example.insert(std::make_pair('v',"...-"));
	example.insert(std::make_pair('w',".--"));
	example.insert(std::make_pair('x',"-..-"));
	example.insert(std::make_pair('y',"-.--"));
	example.insert(std::make_pair('z',"--.."));

//punctuation
	example.insert(std::make_pair(' ' ," "));	
	example.insert(std::make_pair('.' ,".-.-.-"));
	example.insert(std::make_pair(',' ," --..--"));
	example.insert(std::make_pair('?' ,"..--.."));
	example.insert(std::make_pair('!',"-.-.--"));
	example.insert(std::make_pair('\'',".----."));
	example.insert(std::make_pair('/',"-..-."));
	example.insert(std::make_pair('@',".--.-."));
	example.insert(std::make_pair('=',"-...-"));
	example.insert(std::make_pair('(',"-.--."));
	example.insert(std::make_pair(')',"-.--.-"));
	example.insert(std::make_pair('+', ".-.-."));
	example.insert(std::make_pair('-', "-....-"));
	example.insert(std::make_pair('+', ".-.-."));
	example.insert(std::make_pair('_', "..--.-"));
	example.insert(std::make_pair(':', "---..."));
	example.insert(std::make_pair(';', "-.-.-."));

cout << "Morse equivalent:"<<endl; 
for (auto i : name)
{
auto search = example.find(i);
if (search->second != " ")
count++;
cout <<search->second<<"  ";
}
cout << "\n\nTotal ammount of characters: " << count << endl;

}


void symb()
{
	cin.ignore();
string name;

cout << " TRANSLATE \f2 \fMORSE "<<endl;
cout << "->";
if(getline(cin, name)){}
map<string,char> exam;

//upper-case
	exam.insert(std::make_pair(".-",'A'));
	exam.insert(std::make_pair("-...",'B'));
	exam.insert(std::make_pair("-.-.",'C'));
	exam.insert(std::make_pair("-..",'D'));
	exam.insert(std::make_pair(".",'E'));
	exam.insert(std::make_pair("..-.",'F'));
	exam.insert(std::make_pair("--.",'G'));
	exam.insert(std::make_pair("....",'H'));
	exam.insert(std::make_pair("..",'I'));
	exam.insert(std::make_pair(".---",'J'));
	
	exam.insert(std::make_pair("-.-",'K'));
	exam.insert(std::make_pair(".-..",'L'));
	exam.insert(std::make_pair("--",'M'));
	exam.insert(std::make_pair("-.",'N'));
	exam.insert(std::make_pair("---",'O'));
	exam.insert(std::make_pair(".--.",'P'));
	exam.insert(std::make_pair("--.-",'Q'));
	exam.insert(std::make_pair(".-.",'R'));
	exam.insert(std::make_pair("...",'S'));
	exam.insert(std::make_pair("-",'T'));
	
	exam.insert(std::make_pair("..-",'U'));
	exam.insert(std::make_pair("...-",'V'));
	exam.insert(std::make_pair(".--",'W'));
	exam.insert(std::make_pair("-..-",'X'));
	exam.insert(std::make_pair("-.--",'Y'));
	exam.insert(std::make_pair("--..",'Z'));

//numeric
	exam.insert(std::make_pair(".----",'1'));
	exam.insert(std::make_pair("..---",'2'));
	exam.insert(std::make_pair("...--",'3'));
	exam.insert(std::make_pair("....-",'4'));
	exam.insert(std::make_pair(".....",'5'));
	exam.insert(std::make_pair("-....",'6'));
	exam.insert(std::make_pair("--...",'7'));
	exam.insert(std::make_pair("---..",'8'));
	exam.insert(std::make_pair("----.",'9'));
	exam.insert(std::make_pair("-----",'0'));




cout << "Legible equivalent:"<<endl; 

	 		
	 		auto search = exam.find(name);
	 		
	 			if(search != exam.end())
	 			{
cout <<'\n'<< name  << " = " << search->second << '\n';
	 			}
	 			
	 	else 
	 	{cout << name << " not found!";}
	 	
}
 

 int main()
{
int x;
cout << "Select an option:\n" <<endl;
cout << "[1] View conversion sheet" <<endl;
cout << "[2] Translate to morse" <<endl;
cout << "[3] Translate from morse" <<endl;	
cout << "[0] Exit" <<endl;
cout << "->";
cin >> x;

switch(x)
{
case 1: sheet();break;
case 2: phrase();break;
case 3: symb();break;
case 0: return 0;break;
default: break;
}




return 0;
}

