#include <iostream>
#include "foobar.h"
#include "func.hpp"

int main()
{
    Print("hello, world");
    Print();
    
    std::string s('a', 'b');
    std::cout << s << std::endl;
    
    std::string t{'a', 'b'};
    std::cout << t << std::endl;
    
    std::cout << func1(1, 1.1) << std::endl;
    std::cout << func2(1, 1.1) << std::endl;
    
    int a{1 + 2};
    std::cout << a << std::endl;
    
    int b[]{2, 3, 5, 7, 11};
    
    for (auto &p : b)
    {
        std::cout << p << std::endl;
    }
    return 0;
}