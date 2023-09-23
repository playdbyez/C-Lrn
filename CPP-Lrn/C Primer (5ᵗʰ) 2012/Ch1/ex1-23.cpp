#include<iostream>
#include"Sales_item.h"

using namespace std;

int main()
{
Sales_item x;


cout << "\t##############" << endl;
cout << "\t# UNITS SOLD #" << endl;
cout << "\t##############" << endl;

cout << "\nInsert matching ISBN product details: " << endl;



if(cin>>x)
{ 	Sales_item y;
			while(cin>>y){
			if(x.isbn() == y.isbn())

			x+=y;
			
else 
{
cout << "\nTotals for: "<< x.isbn() << endl;
cout << "Units: " << x.units_sold << endl;

x=y;
cout << "\n\nNew ISBN value is unmatching!!\n Proceed with new value: " << endl;

}	
}
//IMPORTANT LINE outside while and else(print last transaction)
cout << "\nTotals for: "<< x.isbn() << endl;
cout << "Units: " << x.units_sold <<  endl;
					

	
}	
	
return 0;	
}
