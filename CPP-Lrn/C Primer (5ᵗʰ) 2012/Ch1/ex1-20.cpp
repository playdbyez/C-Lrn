#include<iostream>
#include "Sales_item.h"

using namespace std;

int main()
{

cout << "Enter Book Details: " << endl;
Sales_item x;

if(cin>>x)
{
Sales_item y;
				while(cin>>y)
						{
						if(x.isbn() == y.isbn())
						{
						x.units_sold += y.units_sold;
						}
						

		else
		{
		cout << "\nTotal Sold: " << x.units_sold << endl;
		cout << x << endl;
		x=y;
		}
						}

cout << "\nTotal Sold: " << x.units_sold << endl;
cout << x<< endl;
}



return 0;
}
