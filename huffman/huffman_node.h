#ifndef _HUFFMAN_NODE_H_
#define _HUFFMAN_NODE_H_

#include <iostream>
#include <map>
#include <string>

class huffman_node;

#include "huffman.h"

typedef unsigned char huffman_byte;

class huffman_node
{
public:
    huffman_byte ch = 0;
    huffman_node *left = nullptr, *right = nullptr;
    
    ~huffman_node()
    {
        if (left)
        {
            delete left;
            left = nullptr;
        }
        
        if (right)
        {
            delete right;
            right = nullptr;
        }
    }
    
    std::map<char, std::string> ToMap();
    bool operator<(const huffman_node &b) const;
    bool operator<=(const huffman_node &b) const;
    bool operator>(const huffman_node &b) const;
    bool operator>=(const huffman_node &b) const;
    void Print(std::string prefix);
    
    friend huffman_node *huffman_encode(const size_t *const, size_t);
    
private:
    size_t weight = 0;
    void AddMap(std::map<char, std::string> &m, std::string prefix);
};

#endif // _HUFFMAN_NODE_H_