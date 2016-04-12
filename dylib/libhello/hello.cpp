#include "hello.h"

void hello()
{
    std::cout << "hello, world" << std::endl;
}

void Hello::Print()
{
    std::cout << "hello, class" << std::endl;
}

void Hello::Foo()
{
    std::cout << "Hello::Foo" << std::endl;
}

void Derived::Foo()
{
    std::cout << "Derived::Foo" << std::endl;
}