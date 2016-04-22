#ifndef _MY_MAX_HPP_
#define _MY_MAX_HPP_

#include <iostream>
#include <typeinfo>

template <typename T>
auto my_max(T begin, T end)
    -> decltype(*begin)
{
    std::cout << "[DEBUG]: " << typeid(T).name() << std::endl;
    T m = begin;
    for (T i = begin; i != end; ++i)
    {
        if (*i > *m)
            m = i;
    }
    return *m;
}

template <typename T>
void print_list(T begin, T end, const char *delim)
{
    for (T i = begin; i != end; ++i)
    {
        std::cout << *i << delim;
    }
}

#endif // _MY_MAX_HPP_