#ifndef A_H_
#define A_H_

#include <iostream>

template <typename T>
class A
{
private:
    T a[3];
    static int b;
public:
    A()
    {
        for (int i = 0; i < 3; ++i)
        {
            a[i] = b + i;
        }
        b += 3;
    }

    void show()
    {
        std::cout << a[2] << " " << b << std::endl;
    }
};

#endif // A_H_