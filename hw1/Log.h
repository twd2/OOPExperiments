#ifndef _LOG_H_
#define _LOG_H_

#include <iostream>

#include "level.h"

class Log
{
private:
    std::ostream &outs;
    level_t current_level = warning;
    level_t min_level = warning;
public:
    Log()
        : outs(std::cerr)
    {

    }

    Log(std::ostream &outs)
        : outs(outs)
    {

    }

    template <typename T>
    Log &operator<<(const T &v);
    
    Log &operator<<(std::ostream& (*pf)(std::ostream&));
    Log &operator<<(std::ios& (*pf)(std::ios&));
    Log &operator<<(std::ios_base& (*pf)(std::ios_base&));

    void set_level(std::string name)
    {
        min_level = level::to_level(name);
    }
};

template <typename T>
Log &Log::operator<<(const T &v)
{
    if ((int)current_level >= (int)min_level)
    {
        outs << v;
    }
    return *this;
}

template <>
Log &Log::operator<<(const level &v);

#endif // _LOG_H_
