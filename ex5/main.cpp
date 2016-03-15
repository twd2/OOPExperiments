#include <iostream>
#include "Base.h"
#include "Derived1.h"
#include "A.h"

using namespace std;

int main()
{
    Base b10, b11(22), b12(9, 8), b13(4, 5, 6);
    Derived1 d10, d11(22), d12(9, 8), d13(4, 5, 6);
    
    b10.Print();
    b11.Print();
    b12.Print();
    b13.Print();
    
    d10.Print();
    d11.Print();
    d12.Print();
    d13.Print();
    
    B b;
    A a1;
    A a2(b);
    A a3 = b;
    
    return 0;
}
