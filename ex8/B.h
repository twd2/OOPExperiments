#ifndef _B_H_
#define _B_H_

#include <iostream>

/* //error: explicit specialization of non-template class 'B'
template <typename T2>
class B<int, T2>
{
public:
    virtual void print();
};
// */

template <typename T1, typename T2>
class B
{
public:
    virtual void print();
};

template <typename T1, typename T2>
void B<T1, T2>::print()
{
    std::cout << "hello, world" << std::endl;
}

template <typename T2>
class B<int, T2>
{
public:
    virtual void print();
};

template <typename T2>
void B<int, T2>::print()
{
    std::cout << "hello, int" << std::endl;
}

#endif // _B_H_
