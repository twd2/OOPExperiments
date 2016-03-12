#include "Derived1.h"

void Derived1::Print()
{
    std::cout << "Hello from Derived1!" << std::endl;
}

void Derived1::PrintNumberVirtual()
{
    std::cout << "Derived1::PrintNumVirtual(), Num: " << std::hex << my_num << std::endl;
}
