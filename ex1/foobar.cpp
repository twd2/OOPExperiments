#include "foobar.h"

void Print(std::string str)
{
    for (auto &ch : str)
    {
        std::cout << ch << ", ";
    }
    std::cout << std::endl;
}
