#include<iostream>
#include<string>

 using namespace std; 

void ro(){cin.ignore();
cout << "ROMANIAN\nEnter any number from 0 - 10:\n \n";
cout << "->";
int i;
cin >> i;
if(i !=isalpha(i)){//maiTwu
switch(i){//shapThamcortVVhite

	case 10:
	cout << "z e t c h e.\n\n";break;
	case 9:
	cout << "N a o .\n\n";break;
	case 8:
	cout << "o p t h .\n\n";break;
	case 7:
	cout << "s h a p t e .\n\n";break;
	case 6:
	cout << "s h a s s e .\n\n";break;
	case 5:
	cout << "c i n k .\n\n";break;
	case 4:
	cout << "p a t t e .\n\n";break;
	case 3:
	cout << "t r i e.\n\n";break;
	case 2:
	cout << "d u o .\n\n";break;
	case 1:
	cout << "O n n o .\n\n";break;
	case 0:
	cout <<"N u l a. .\n";break;
	default :cout << "I n v a l i d e n t r y . ..\n";
	}
	}
	else {
	cout << "I n v a l i d e n t r y ...\n";
	}}
	
void jp()
{cin.ignore();
int x;
cout << "JAPANESE\nEnter any number from 0 - 10:\n \n";
cin >> x;
if(x !=isalpha(x)){
	
		switch(x)
		{
		case 10:
			cout <<"J u u . \n";
			break;
		case 9:
			cout <<"K i r u. \n";
			break;
		case 8:
			cout <<"H a c h i . \n";
			break;
		case 7:
			cout <<"N a n a . \n";
			break;
		case 6:
			cout <<"R o k u . \n";
			break;
		case 5:
			cout <<"G o . \n";
			break;
		case 4:
			cout <<"Y o n . \n";
			break;
		case 3:
			cout <<"S a n . \n";
			break;
		case 2:
			cout <<"N i i . \n";
			break;
		case 1:
			cout <<"I c h i . \n";
			break;
		case 0:
			cout <<"R e i . \n";
			break;
		default:
			cout <<"S o r r y? \n";break;		
		}
}
	else {	
		cout << "Invalid option.. . \n";
	}}


void ru(){	
cin.ignore();	

cout << "RUSSIAN\nEnter any number from 0 - 10:\n \n";
	int i;
	cin >> i;
	
	
		
		
	if(i !=isalpha(i)){
	
	switch(i)
		{
		case 10:
		cout << "d e s s i t .\n\n";
		break;
		
		case 9:
		cout << "d e v i t s .\n\n";
		break;
		
		case 8:
		cout << "v o s e m .\n\n";
		break;
		
		case 7:
		cout << "s e e m .\n\n";
		break;
		
		case 6:
		cout << "s h e e s t .\n\n";
		break;
		
		case 5:
		cout << "p i e t t\n\n";
		break;
		
		case 4:
		cout << "c h i t i r r e .\n\n";
		break;
		
		case 3:
		cout << "t h g i .\n\n";
		break;
		
		case 2:
		cout << "d h v a .\n\n";
		break;
		
		case 1:
		cout << "a j i n. \n\n";
		break;
		case 0:
		cout <<"n u l  \n";
		break;
		default :
		cout << "I n v a l i d  e n t r y . ..\n";break;
		 }
		   	}
	else {
	cout << "I n v a l i d  e n t r y  ...\n";
	}		
}



 int main()
{
int f;


cout << "\tNUMERIC\n";
cout << "\tTRANSLATOR\n";

cout << "\n";
cout << "[1]: Romanian\n";
cout << "[2]: Japanese\n";
cout << "[3]: Russian\n";
cout << "\n";
cout << "\n";
cout << "Enter a number code";
cout << "->";
cin >> f;
if(!isalpha(f)){
switch(f)
{
case 1: ro();break;
case 2: jp();break;
case 3: ru();break;
default :cout << "I n v a l i d  e n t r y . ..\n";
}
}
int y = -1;
return y;
}
