#include "main.h"

int main()
{
    hello();
    Hello *h = new Hello();
    h->Print();
    h->Foo();
    Hello e;
    e.Print();
    Hello *d = new Derived();
    d->Foo();
    return 0;
}