#include <iostream>
#include "file.h"
#include "a.hpp"
#include "b.hpp"
#include <typeinfo>

using namespace std;

int main()
{
    print();
    //cout << sum(1, 2) << endl; // error: no matching function for call to 'sum'
    cout << sum<int>(1, 2) << endl;
    cout << sum<int>(1.3, 1.2) << endl;
    cout << sum<double, int>(1, 2) << endl;
    //cout << sum<double, , double>(1.1, 2.2) << endl; // error: expected expression
    //                   ^
    
    cout << add(1, 2) << endl;
    
    // cout << add(1, 2.33) << endl; // candidate template ignored: deduced conflicting types for parameter 'T' ('int' vs. 'double')
    
    // const double size = 4069.1;
    // FixedArray<unsigned char, size> buffer; // error: conversion from 'const double' to 'int' is not allowed in a converted constant expression
    
    // unsigned int size = 4096;
    // FixedArray<unsigned char, size> buffer; // error: non-type template argument is not a constant expression
    
    const size_t size = 4096;
    FixedArray<unsigned char, size> buffer;
    cout << buffer.size() << endl;
    cout << typeid(buffer).name() << endl;
    
    return 0;
}