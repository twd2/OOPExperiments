#ifndef _MATRIX_HPP_
#define _MATRIX_HPP_

#include <iostream>

class Matrix
{
private:
    int data[3][3];
    
public:
    static int m, n;

    Matrix(int x)
    {
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                data[i][j] = x;
            }
        }
    }
    
    friend std::ostream &operator<<(std::ostream&, const Matrix&);
};

int Matrix::m = 3, Matrix::n = 3;

std::ostream &operator<<(std::ostream &outs, const Matrix &m)
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            outs << m.data[i][j] << '\t';
        }
        outs << std::endl;
    }
    return outs;
}

#endif // _MATRIX_HPP_