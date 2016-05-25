#include <iostream>
#include <iomanip>

#include "level.h"
#include "Log.h"

using namespace std;

int main()
{
    Log logger;
    logger.set_level("error");
    logger << setfill('-') << setw(6) << hex << 666 << "hey!" << endl;
    logger << level("warning") << "hello, twd" << 2 << endl
           << level("error") << "hello, world" << endl
           << level("fatal") << "hello, twd" << 3 << endl;
    logger << setfill('*') << setw(6) << hex << 233 << "goodbye" << endl;
    return 0;
}