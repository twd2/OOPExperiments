#include <iostream>
#include <typeinfo>

// header files
#include "foobar.h"
#include "func.hpp"

int foo()
{
    std::cout << "foo is called!" << std::endl;
    return 123;
}

void *bar()
{
    std::cout << "bar is called!" << std::endl;
    return (void*)123;
}

int main()
{
    // default
    Print("hello, world");
    Print();
    
    // {} initializing
    std::string s('a', 'b'); // calls string(size_t, char)
    std::cout << s << std::endl;
    
    std::string t{'a', 'b'};
    std::cout << t << std::endl;
    
    int a{1 + 2};
    std::cout << a << std::endl;
    
    int b[]{2, 3, 5, 7, 11};
    
    // for each
    for (auto &p : b)
    {
        std::cout << p << std::endl;
    }
    
    // decltype
    std::cout << func1(1, 1.1) << std::endl;
    std::cout << func2(1, 1.1) << std::endl;
    
    std::cout << typeid(decltype(foo())).name() << std::endl;
    std::cout << typeid(decltype(bar())).name() << std::endl;
    
    // typeid 
    typedef void (*ptr1)(int, int);
    typedef ptr1 (*ptr2)(char*, int);
    std::cout << typeid(ptr1).name() << std::endl;
    std::cout << typeid(ptr2).name() << std::endl;
    return 0;
}