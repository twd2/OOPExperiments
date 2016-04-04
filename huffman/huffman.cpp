#include "huffman.h"

size_t *huffman_getfreq(const huffman_byte *const buffer, size_t size)
{
    size_t *freq = new size_t[256] {0};
    for (size_t i = 0; i < size; ++i)
    {
        ++freq[buffer[i]];
    }
    return freq;
}

huffman_node *huffman_encode(const size_t *const freq, size_t size)
{
    std::vector<huffman_node*> nodes;
    for (size_t i = 0; i < size; ++i)
    {
        auto *node = new huffman_node();
        node->ch = (huffman_byte)i;
        node->weight = freq[i];
        nodes.push_back(node);
    }

    for (ptrdiff_t i = nodes.size() - 1; i >= 0; --i)
    {
        if (nodes[i]->weight == 0)
        {
            delete nodes[i];
            nodes[i] = nullptr;
            nodes.erase(nodes.begin() + i);
        }
    }
    
    std::sort(nodes.begin(), nodes.end(), _compptr<huffman_node>);
    
    while (nodes.size() >= 2)
    {
        auto *a = nodes[0];
        auto *b = nodes[1];
        nodes.erase(nodes.begin(), nodes.begin() + 2);
        
        auto *new_node = new huffman_node();
        new_node->ch = 0;
        new_node->weight = a->weight + b->weight;
        new_node->left = a;
        new_node->right = b;
        
        if (nodes.size() == 0)
        {
            nodes.push_back(new_node);
        }
        else
        {
            size_t pos = 1 + _binsearch(nodes, new_node);
            nodes.insert(nodes.begin() + pos, new_node);
        }
    }
    
    return nodes[0];
}