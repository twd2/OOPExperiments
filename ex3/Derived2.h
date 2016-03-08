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
    void Print() override;
    void AnotherPrint();
    virtual void AnotherVirtual();
};

#endif // _DEVIRED2_H_
