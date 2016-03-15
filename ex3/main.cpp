#include <iostream>
#include <vector>
#include <string>
#include "Base.h"
#include "Derived1.h"
#include "Derived2.h"
#include "my_max.hpp"

using namespace std;

void foo(Base &b)
{
    b.Print();
    b.Print2();
    b.PrintNumber();
    b.PrintNumberVirtual();
}

void bar(Base b)
{
    b.Print();
    b.Print2();
    b.PrintNumber();
    b.PrintNumberVirtual();
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

void test()
{
    int a[] = {1,2,233,4,6,5};
    
    print_list(a, a + 6, " ");
    cout << endl;
    
    my_max(a, a + 6) = 0;
    
    print_list(a, a + 6, " ");
    cout << endl;
    
    vector<string> b = {"twd2", "sxkdz", "fb", "zzZ"};
    print_list(b.begin(), b.end(), "\n");
    cout << endl;
    
    my_max(b.begin(), b.end()) = "666";
    string x = my_max(b.begin(), b.end());
    
    print_list(b.begin(), b.end(), "\n");
    cout << endl;
    
    cout << x << endl;
}

int main()
{
    test();
    
    Base b;
    Derived1 d1;
    Derived2 d2;
    
    b.Print2();
    b.PrintNumber();
    b.PrintNumberVirtual();
    cout << endl;
    
    d1.Print2();
    d1.PrintNumber();
    d1.PrintNumberVirtual();
    cout << endl;
    
    d2.Print2();
    d2.PrintNumber();
    d2.PrintNumberVirtual();
    cout << endl;
    
    foo(b);
    cout << endl;
    
    foo(d1);
    cout << endl;
    
    foo(d2);
    cout << endl;
    
    bar(b);
    cout << endl;
    
    bar(d1);
    cout << endl;
    
    bar(d2);
    cout << endl;
    
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
    
    // cout << "Calling p3->Print()" << endl;
    // p3->Print(); // segmentation fault on gcc version 5.2.1 20151010 (Ubuntu 5.2.1-22ubuntu2) 
    
    cout << "Calling d2.AnotherPrint()" << endl;
    d2.AnotherPrint();
    
    cout << "Calling p3->AnotherPrint()" << endl;
    p3->AnotherPrint();
    
    cout << "Calling d2.AnotherVirtual()" << endl;
    d2.AnotherVirtual();
    
    // cout << "Calling p3->AnotherVirtual()" << endl;
    // p3->AnotherVirtual(); // segmentation fault
    
    return 0;
}
