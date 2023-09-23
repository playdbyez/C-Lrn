#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
srand((unsigned) time (0));
  int randNumb;
  int randNun;
  
              for(int index = 0; index < 5; index++)
              {
              randNun = (rand() % 9999) +1;
              randNumb = (rand() % 999) +1;
                cout << randNumb << " " << randNun << endl;
              }
}
