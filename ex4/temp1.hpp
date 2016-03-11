#ifndef _TEMP1_HPP_
#define _TEMP1_HPP_

#include <iostream>
#include <typeinfo>

template <typename T, typename U>
class temp1
{
public:
    temp1();
};

template <typename T, typename U>
temp1<T, U>::temp1()
{
    std::cout << "Constructing temp1<" << typeid(T).name() << ", " << typeid(U).name() << ">" << std::endl;
}

#endif // _TEMP1_HPP_
