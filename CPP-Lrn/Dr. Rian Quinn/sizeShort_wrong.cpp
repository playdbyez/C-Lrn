#include <iostream>
#pragma pack(push, 1)
using namespace std;

struct mystruct {
uint16_t *data1; //2bit
uint64_t data2; //8bit
};
#pragma pack(pop)
int main()
{
std::cout << "size: " << sizeof(mystruct) << '\n';
//output: size: 16
}
