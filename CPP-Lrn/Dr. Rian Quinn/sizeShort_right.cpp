#include <iostream>
#pragma pack(push, 1)
struct mystruct {
uint64_t data1; //8bit
uint16_t data2; //2bit
};
#pragma pack(pop)
int main()
{
std::cout << "size: " << sizeof(mystruct) << '\n';
//output: size: 10

}
