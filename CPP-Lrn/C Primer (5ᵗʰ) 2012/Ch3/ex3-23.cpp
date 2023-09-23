#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> tennis(10);
  double val = 0.5;
  cout <<"Vector of size: " << tennis.size() << "\n";
  cout << "With values as:\n";
  for (auto it = tennis.begin(); it != tennis.end(); it++)
  {cout << *it << " ";}
  
  cout << "\n\n::Post-Operations::\n\nVector of size:" << tennis.size() << "\n" << "With values as:\n";
  for (auto it = tennis.begin(); it != tennis.end(); it++)
  {*it=val*=2;
    cout << *it << " ";
    
  }




}
