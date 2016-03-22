#ifndef _TEMP3_HPP_
#define _TEMP3_HPP_

#include <iostream>
#include <typeinfo>

template <typename T, typename U, template <typename V, typename W> class TEMP>
class temp3
{
private:
    TEMP<T, U> tTU;
    TEMP<U, T> tUT;
public:
    temp3();
};

template <typename T, typename U, template <typename V, typename W> class TEMP>
temp3<T, U, TEMP>::temp3()
    : tTU(), tUT()
{
    std::cout << "Constructing temp3<" << typeid(T).name() << ", " << typeid(U).name() << ", (a template, not a type)>" << std::endl;
}

#endif // _TEMP3_HPP_
