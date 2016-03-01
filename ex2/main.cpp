#include <iostream>
#include "Matrix.hpp"
#include "Foo.h"

using namespace std;

void black()
{
    Matrix m(23);
    cout << m << endl;
    
    *(int*)(&m) = 1;
    *((int*)(&m) + 8) = 2;
    
    cout << m << endl;
}

Foo mkfoo(char b)
{
    cout << "mkfoo()" << endl;
    Foo f;
    
    for (int i = 0; i < 64; ++i)
    {
        f[i] = b;
    }
    
    cout << "exiting mkfoo()" << endl;
    return f;
}

int main()
{
    black();
    
    cout << "creating foo" << endl;
    Foo foo(0xff);
    cout << endl;
    
    cout << "creating foo2" << endl;
    Foo foo2(move(foo));
    cout << endl;
    
    cout << "creating foo3" << endl;
    Foo foo3(foo2);
    cout << endl;
    
    cout << "creating foo4" << endl;
    Foo foo4 = mkfoo(0xf4);
    cout << endl;
    
    cout << "creating foo5" << endl;
    Foo foo5;
    foo5 = foo2;
    cout << endl;
    
    cout << "creating foo6" << endl;
    Foo foo6;
    foo6 = mkfoo(0xcc);
    cout << endl;
    
    cout << "creating foo7" << endl;
    Foo foo7;
    foo7[0] = 0xf7;
    foo7 = move(foo2);
    cout << endl;
    
    cout << "foo: " << endl;
    foo.Dump(cout);
    cout << endl;
    
    cout << "foo2: " << endl;
    foo2.Dump(cout);
    cout << endl;
    
    cout << "foo3: " << endl;
    foo3.Dump(cout);
    cout << endl;
    
    cout << "foo4: " << endl;
    foo4.Dump(cout);
    cout << endl;
    
    cout << "foo5: " << endl;
    foo5.Dump(cout);
    cout << endl;
    
    cout << "foo6: " << endl;
    foo6.Dump(cout);
    cout << endl;
    
    cout << "foo7: " << endl;
    foo7.Dump(cout);
    cout << endl;

    // foo6();

    return 0;
}