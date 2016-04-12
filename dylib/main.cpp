#include "main.h"

int main()
{
    hello();
    auto *h = new Hello();
    h->Print();
    Hello e;
    e.Print();
    return 0;
}