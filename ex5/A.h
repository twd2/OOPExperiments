#ifndef _A_H_
#define _A_H_

#include <iostream>
#include "B.h"

class A
{
public:
    int num = 0;
    
    A() = default;
    
    A(const A &a)
    {
        std::cout << "const A&" << std::endl;
        num = a.num;
    }

    A(const B &b)
    {
        std::cout << "const B&" << std::endl;
        num = b.my_num;
    }
    
};

#endif // _A_H_