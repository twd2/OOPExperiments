#include "Derived2.h"

void Derived2::Print()
{
    std::cout << "Hello from Derived2!" << std::endl;
}

void Derived2::AnotherPrint()
{
    std::cout << "Goodbye from Derived2! " << private_int << std::endl;
}

void Derived2::AnotherVirtual()
{
    std::cout << "Number from Derived2: " << private_int << std::endl;
}

void Derived2::PrintNumberVirtual()
{
    std::cout << "Derived2::PrintNumVirtual(), Num: " << std::hex << my_num << std::endl;
}
