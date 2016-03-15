#ifndef _BASE_H_
#define _BASE_H_

#include <iostream>

class Base
{
public:
    int a = 0, b = 0, c = 0;
    
    Base(int a = 1, int b = 2, int c = 3)
        : a(a), b(b), c(c)
    {
        
    }
    
    void Print();
};

#endif // _BASE_H_
