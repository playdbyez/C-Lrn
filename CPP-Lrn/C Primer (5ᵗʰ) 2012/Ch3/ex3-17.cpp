


//ok so a vector with 8 input strings
//for loop to < 8 iterates through the vector
//stdout each element with [0] set to cap in a line

#include<iostream>
#include<vector>
#include<string>
 using namespace std; 

 int main()
{
vector<string> input(8);

for (int i =0; i<8; ++i){cin >> input[i];}


cout << "\n\nEigHt EnTriES CAPS lOCKeD:\n";
for(int l =0; l<8;l++){
			for(char &c: input[l])
			{input[l][0] = toupper(input[l][0]);}
								}

for(int k =0; k<8;k++){cout << input[k] << " ";}
cout << ".\n";
	
return 0;
}
