#ifndef _HUFFMAN_H_
#define _HUFFMAN_H_

#include <iostream>
#include <vector>
#include "huffman_node.h"

typedef unsigned char huffman_byte;

template <typename T>
size_t _binsearch(const std::vector<T> &v, T tofind)
{
    size_t left = 0, right = v.size() - 1;
    
    if (*tofind >= *v[right])
    {
        return right;
    }
    
    while (left < right && left >= 0 && right < v.size())
    {
        size_t mid = left + (right - left) / 2;
        
        if (*v[mid] <= *tofind && (mid >= v.size() || *v[mid + 1] > *tofind))
        {
            return mid;
        }
        else if (*tofind < *v[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    
    return -1;
}

template <typename T>
bool _compptr(T *a, T *b)
{
    return *a < *b;
}

size_t *huffman_getfreq(const huffman_byte *const buffer, size_t size);
huffman_node *huffman_encode(const size_t *const freq, size_t size);

#endif // _HUFFMAN_H_