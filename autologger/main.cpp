#include "main.h"

void foo(int n)
{
    AutoLogger l("foo");
    if (n <= 0) return;
    foo(n - 1);
}

void bar(int n)
{
    AutoLogger l("bar");
    if (n <= 0) return;
    bar(n - 1);
}

int main()
{
    AutoLogger l("main");
    thread t1(foo, 10), t2(bar, 20);
    
    t1.join();
    
    {
        AutoLogger l1("block");
        cout << "hello, world" << endl;
    }
    
    t2.join();
    return 0;
}
