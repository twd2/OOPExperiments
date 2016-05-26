#include "Member.h"

std::ostream &operator<<(std::ostream &outs, const Member &mem)
{
    outs << "(" << mem.name << ", " << mem.age << ")";
    return outs;
}