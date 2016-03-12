#ifndef _DEVIRED1_H_
#define _DEVIRED1_H_

#include <iostream>
#include "Base.h"

class Derived1
    : public Base
{
public:
    int my_num = 0xDE1;
    void Print() override;
    void PrintNumberVirtual() override;
};

#endif // _DEVIRED1_H_
