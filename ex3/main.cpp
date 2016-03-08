#include <iostream>
#include "Base.h"
#include "Derived1.h"
#include "Derived2.h"

using namespace std;

void foo(Base &b)
{
    b.Print();
    b.Print2();
}

void bar(Base b)
{
    b.Print();
}

void black(Base &b, size_t index)
{
    typedef void (*ptrFunc)();
    cout << "Address of object " << reinterpret_cast<void*>(&b) << endl;
    void *ptrVirtualTable = *reinterpret_cast<void**>(&b);
    cout << "Address of virtual table " << reinterpret_cast<void*>(ptrVirtualTable) << endl;
    ptrFunc func = reinterpret_cast<ptrFunc*>(ptrVirtualTable)[index];
    cout << "Address of virtual function #" << index << " " << reinterpret_cast<void*>(func) << endl;
    cout << "Calling it." << endl;
    func();
}

int main()
{
    Base b;
    Derived1 d1;
    Derived2 d2;
    
    foo(b);
    foo(d1);
    foo(d2);
    
    bar(b);
    bar(d1);
    bar(d2);
    
    for (auto i : {0, 1})
    {
        black(b, i);
        black(d1, i);
        black(d2, i);
    }
    
    // Derived2 *p1 = static_cast<Derived2*>(&d1); // Error!
    Derived2 *p2 = dynamic_cast<Derived2*>(&d1);
    cout << p2 << endl;
    
    Derived2 *p3 = reinterpret_cast<Derived2*>(&d1);
    cout << p3 << endl;
    p3->Print();
    
    d2.AnotherPrint();
    p3->AnotherPrint();
    
    d2.AnotherVirtual();
    // p3->AnotherVirtual(); // segmentation fault
    
    return 0;
}