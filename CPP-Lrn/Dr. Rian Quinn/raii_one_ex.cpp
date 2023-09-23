#include<iostream>
 using namespace std; 
/* Example: C */
struct point
{
int x;
int y;
};
	
void translate(point *p; int val)
{
if (p == NULL) 
{
return;
}

p->x += val;
p->y += val;
}
 int main()
{
cout << translate() << endl;
return 0;
}
