#include "Base.h"

void Base::Print()
{
    std::cout << "Hello from Base!" << std::endl;
}

void Base::Print2()
{
    std::cout << "Hello from Base! (2)" << std::endl;
}

void Base::PrintNumber()
{
    std::cout << "Base::PrintNum(), Num: " << std::hex << my_num << std::endl;
}

void Base::PrintNumberVirtual()
{
    std::cout << "Base::PrintNumVirtual(), Num: " << std::hex << my_num << std::endl;
}
