#ifndef _HUFFMAN_H_
#define _HUFFMAN_H_

#include <iostream>
#include <vector>
#include "huffman_node.h"

template <typename T>
size_t binsearch(const std::vector<T> &v, T tofind)
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

huffman_node *huffman_encode(const char *buffer, size_t size);

#endif // _HUFFMAN_H_