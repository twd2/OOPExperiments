#include "Log.h"

template <>
Log &Log::operator<<(const level &v)
{
    current_level = v.lv;
    return *this;
}

Log &Log::operator<<(std::ostream& (*pf)(std::ostream&))
{
    if ((int)current_level >= (int)min_level)
    {
        pf(outs);
    }
    return *this;
}

Log &Log::operator<<(std::ios& (*pf)(std::ios&))
{
    if ((int)current_level >= (int)min_level)
    {
        pf(outs);
    }
    return *this;
}

Log &Log::operator<<(std::ios_base& (*pf)(std::ios_base&))
{
    if ((int)current_level >= (int)min_level)
    {
        pf(outs);
    }
    return *this;
}
