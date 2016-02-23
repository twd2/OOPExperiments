#ifndef _FUNC_HPP_
#define _FUNC_HPP_

/* Compile error
template<typename T, typename U>
decltype(a + b) func(T &&a, U &&b)
{
    return a + b;
}
*/

// so ugly.
template<typename T, typename U>
decltype(*(T*)0 + *(U*)0) func1(T &&a, U &&b)
{
    return a + b;
}

// elegant!
template<typename T, typename U>
auto func2(T &&a, U &&b)
    -> decltype(a + b)
{
    return a + b;
}

#endif // _FUNC_HPP_