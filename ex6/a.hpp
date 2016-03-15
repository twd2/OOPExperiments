#ifndef _A_HPP_
#define _A_HPP_

template <typename T1, typename T2, typename T3>
T1 sum(T2 a, T3 b)
{
    return a * a + b * b;
}

template <typename T>
T add(T a, T b)
{
    return a + b;
}

#endif // _A_HPP_