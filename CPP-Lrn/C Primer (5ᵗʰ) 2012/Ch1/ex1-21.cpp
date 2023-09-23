#include<iostream>
#include"Sales_item.h"

using namespace std;

int main()
{
cout << "\nInsert two matching ISBN product details: " << endl;
Sales_item x, y, z;


cout << "Book one: " << endl;
cin>>x;

cout << "Book two: " << endl;
cin>>y;
	if(x.isbn() == y.isbn())
	{
	z = x+=y;
	cout << "\nTotals for: "<< z.isbn() << endl;
	cout << "Units: "<< z.units_sold << "  Revenue: "<<  z.revenue << endl;
	}
	else 
	{
	cout << "\n\nUnmatching ISBN value!!" << endl;
	}




return 0;
}

