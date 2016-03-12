#ifndef _DEVIRED2_H_
#define _DEVIRED2_H_

#include <iostream>
#include "Base.h"

class Derived2
    : public Base
{
private:
    int private_int = 233;
public:
    Derived2()
    {
        my_num = 0xDE2;
    }
    
    void Print() override;
    void AnotherPrint();
    virtual void AnotherVirtual();
    void PrintNumberVirtual() override;
};

#endif // _DEVIRED2_H_
