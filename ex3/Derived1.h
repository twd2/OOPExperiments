#ifndef _DEVIRED1_H_
#define _DEVIRED1_H_

#include <iostream>
#include "Base.h"

class Derived1
    : public Base
{
public:
    void Print() override;
};

#endif // _DEVIRED1_H_
