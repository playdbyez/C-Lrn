//Binary Bootleg Search

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main ()
{
string text = "1 5 2 854 54 69 82 8 4 9 5 46 5  987 23 51 2 854 9 43 1 8 61 3 8 9 87";

auto beg = text.begin();
auto end = text.end();
auto mid = text.begin() + (end - beg) /2;

int find = 51;

sort(text.begin(), text.end());
while (mid != end && *mid != find)
	{
		if(find < *mid)end=mid;
			else beg = mid+1;
			mid = beg + (end - beg) /2;
							}
}
