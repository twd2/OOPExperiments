#ifndef _HELLO_H_
#define _HELLO_H_

#include <iostream>

void hello();

class Hello
{
public:
    void Print();
    virtual void Foo();
};

class Derived : public Hello
{
public:
    virtual void Foo();
};

#endif 