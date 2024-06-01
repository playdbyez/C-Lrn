#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <chrono> 
using namespace std; 
 int main(){
                                        auto start = std::chrono::high_resolution_clock::now();
vector<int> ls {50, 55, 56, 57, 58};     
vector<int> to;
vector<int> d;
vector<int>sums;
vector<int>tart;

int k = 3;
int t = 163;
unsigned long mn = k+1;
int x = 0;
int anz =-1;
int si = ls.size();


sort( ls.begin(), ls.end());
do{ for(size_t i = 0; i<ls.size(); i++){to.push_back(ls[i]);} 
    to.push_back(9999); } 
        while(next_permutation(ls.begin(),ls.end()));


for(size_t j = 0; j<to.size(); j++){
    for(size_t ku = 1; ku < mn; ku++)
        {if (to[j] == 9999)d.push_back(to[j+ku]);}{d.push_back(9999);}}

for (int c =0; c< d.size(); c++)
{if (d[c] != 9999){x+=d[c];}
if (d[c] == 9999 && x !=0){ if (x<=t){sums.push_back(x);} x=0;}
}
sort(sums.begin(), sums.end(),  greater<int>());
anz = sums[0];
   if (k > si){anz = -1;}
if (anz == 0){anz = -1;}

cout << "It is possible visit 3 different locations within " << anz << " hours without surpassing the maximum time available of " << t << " hours.";
auto stop = std::chrono::high_resolution_clock::now();
auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

cout << "\n" << "[Results were fetched in " << duration.count() << "ms]" ;
}
