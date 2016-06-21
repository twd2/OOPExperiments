#include <iostream>
#include "A.h"
#include "B.h"

using namespace std;

int main()
{
    A<int> ai;
    ai.show();

    //A<float> af; // link error: Undefined symbol
    //af.show();

    B<float, int> bfi;
    bfi.print();
    B<int, float> bif;
    bif.print();

    return 0;
}