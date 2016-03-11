#ifndef _TEMP2_HPP_
#define _TEMP2_HPP_

#include <iostream>
#include <typeinfo>

template <typename T>
class temp2
{
private:
    T t;
public:
    temp2();
};

template <typename T>
temp2<T>::temp2()
    : t()
{
    std::cout << "Constructing temp2<" << typeid(T).name() << ">" << std::endl;
}

#endif // _TEMP2_HPP_
