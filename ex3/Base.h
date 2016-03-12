#ifndef _BASE_H_
#define _BASE_H_

#include <iostream>

class Base
{
public:
    int my_num = 0xBA5E;
    virtual void Print();
    virtual void Print2();
    void PrintNumber();
    virtual void PrintNumberVirtual();
};

#endif // _BASE_H_
