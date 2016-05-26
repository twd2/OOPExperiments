#include <iostream>

#include "Member.h"

using namespace std;

int main()
{
    Member newCommers[5] = { Member("Zhang San", 22),
    Member("Li Si", 19),
    Member("Wang Wu", 18),
    Member("Zhao Liu", 24) };
    for (int i=0; i<5; i++)
        cout << newCommers[i] << endl;
    return 0;
}