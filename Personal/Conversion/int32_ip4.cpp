//Input : "2149583361"
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <cmath> 
using namespace std; 

int main() 
{ 
string v = "0"; // has to be devided into eight digit numbs
unsigned a = stod(v);
long int b = a;
long double g = b;
long int pok;
int m =0;
vector <long double> c;
vector <string> s1;
vector <char> s2;
vector <int> d;
vector <long int> calc1;
vector <int> calc2;

vector <string> ff;
string ans;


while(g > 0.9){c.push_back(g/=2); int k = g; g=k;} // used fixed << when displaying with cout


for (int k = 0; k<c.size();k++)
	{s1.push_back(to_string(c[k]));}

for(int j=0;j<s1.size();j++){
	for (auto h : s1[j]){s2.push_back(h);}
					s2.push_back('/');	}

					for (int n = 0; n < s2.size(); n++){ 
						if (d.size() == 26 ) {d.push_back(9999);}
							if (d.size() == 17) {d.push_back(9999);}
								if (d.size() == 8 ) {d.push_back(9999);}
								if (s2[n] == '.' && s2[n+1] !='0'){d.push_back(1);}
								if (s2[n] == '.' && s2[n+1] == '0'){d.push_back(0);}
									}

for (int t = 0; t < d.size(); ++t){
	if(d[t] == 9999){m =-1;calc1.push_back(9999);}
		if (d[t] ==1){calc1.push_back(1*pow(2,m));}m++;}
						calc1.push_back(9999);


for (int li = 0; li < calc1.size(); li++)
{	if (calc1[li] != 9999){pok+=calc1[li];}
		if (calc1[li] == 9999){	calc2.push_back(pok); 
					pok =0;
					calc2.push_back(9999);} }
reverse(calc2.begin(), calc2.end());


for (int ki = 0; ki < calc2.size(); ki++){
	if (calc2[ki] != 9999) {ff.push_back(to_string(calc2[ki]));ff.push_back(".");}}
ff.pop_back();

while(ff.size() < 7){ff.insert(ff.begin(),".");ff.insert(ff.begin(),"0");}

for (int ko = 0; ko < ff.size(); ko++){
ans+=ff[ko];}

cout << ans << "\n";

}
