#include<iostream>
 using namespace std; 

struct Sales_data {
string bookNo;
unsigned units_sold = 0;
double revenue = 0.0;
};





void Singl(){
//1.20
Sales_data item;
double revadd = 0.0;
unsigned unitadd = 0;
double totalrev = 0.0;

cout << "Enter Book name:" << endl;
while(true)
{
cin >> item.bookNo;
cout << "Enter Book price:" << endl;
cin >> item.revenue;
cout << "Enter how many sold:" << endl;
cin >> item.units_sold;	 
unitadd += item.units_sold;
totalrev = item.revenue * item.units_sold;
revadd += totalrev;							
cout << unitadd << " books sold at a total revenue of "<< revadd << endl;
cout << "Next Book name:" << endl;
}
}

void Doubl()
{
//1.21
Sales_data etem, netem;
unsigned g = 0;
unsigned b = 0; 
double p = 0.0;
double q = 0.0;
unsigned z = 0;
unsigned x = 0;


cout << "Enter first title:" << endl;
cin >> etem.bookNo;
cout << "Enter price of title:" << endl;
cin >> etem.revenue;
cout << "Enter how many of it sold:" << endl;
cin >> etem.units_sold;

cout << "Enter second title:" << endl;
cin >> netem.bookNo;
cout << "Enter price of title:" << endl;
cin >> netem.revenue;
cout << "Enter how many of it sold:" << endl;
cin >> netem.units_sold;
			p = etem.units_sold * etem.revenue;
			q = netem.units_sold * netem.revenue;
			g = etem.units_sold;
			b = netem.units_sold;
			
		if(etem.bookNo == netem.bookNo)
		{x=g+b;z=q+p;
		cout << "\nTitle '"<< etem.bookNo << "' had " << x<< " copies sold at a total revenue of "<< z << endl;}
		else 
		{cout << "\n\tERROR: unmatching titles!\n" << endl;}
}



void Revnu()
{
//1.22 
Sales_data x;
double l = 0.0;
double f = 0.0;
unsigned m = 0;
while(true){
cout << "Enter book title" << endl;
cin>>x.bookNo;
cout << "Enter title's price" << endl;
cin>>x.revenue;
cout << "Enter units sold" << endl;
cin>>x.units_sold;
unsigned t = x.units_sold;
unsigned k = t;
double j = x.revenue;
f = j*t;
l+=f;
m+=k;

cout << k << " units were sold for this entry "<< endl;
cout << "And "<< m << " units were sold in total "<< endl;
cout <<"With a total revenue of "<< l << " for all books" <<endl;
}
}


void Match()
{

Sales_data yot, yat;
string ling = yot.bookNo;
unsigned yu = yot.units_sold;
double yo = yot.revenue;
string ming = yat.bookNo;
unsigned ya = yat.units_sold;
double ye = yat.revenue;
double totol = 0.0;

cout << "enter title" << endl;
cin>>ling;		
cout << "price " << endl;
cin >> yo;
cout << "units " << endl;
cin >> yu;
while(true){
cout << "next title" << endl;
cin>>ming;
cout << "price " << endl;
cin >> ye;
cout << "units " << endl;
cin >> ya;
double tol =  ye * ya;
double lot =  yo * yu;	
	if(ling==ming)
				yu+=ya;		
					
	else{
	cout <<"Title " << ling << " units sold " << yu << " & revenue. " << lot << endl;
	ling=ming;
	yu = ya;
	ye = yo;
	lot = tol;		
	}
	}			
}




 int main()
{
int lentry;


cout << "\nD i g i t a l - \fB o o k - \fM a n a g e r\n" << endl;

cout << "[1] Single Entry " << endl;
cout << "[2] Double Entry " << endl;
cout << "[3] Total Revenue " << endl;
cout << "[4] Revenue per Entry \n\n" << endl;
cout << "Your entry:";
cin >> lentry;
switch(lentry)
{
case 1: Singl();break;
case 2: Doubl();break;
case 3: Revnu();break;
case 4: Match();break;
}

return 0;
}
