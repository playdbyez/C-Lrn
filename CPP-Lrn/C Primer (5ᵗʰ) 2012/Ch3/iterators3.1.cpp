
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

// Iterators require the iterator lib included + its type is usually auto
// normal iterators can read/write to the text/vector object they are parsing
// const iterators can only read from the text/vector
//  it->empty() is the same as (*it).empty()
// (*it).empty() // dereferences it and calls the member empty on the resulting object
// *it.empty() // error: attempts to fetch the member named empty from it but it is an iterator and has no member named empty






using namespace std;
int main()
{
  std::string s = "some text written";
  vector<int> idd = {10,20,30}; 

for (auto it = idd.begin(); it != idd.end();it++)
{cout << *it;}

cout << "\n";


//by using cbegin and cend we alter the iterator to a const_iterator type that can only read
for (auto it = s.cbegin(); it != s.cend() && !isspace(*it);it++)
{
//    *it =toupper(*it); // if cbegin is changed to begin and cend changed to end, this operation becomes valid
    
    cout << *it;
}
  
  
 
  
  
return 0;
}
