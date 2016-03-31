#include "huffman.h"

bool compptr(huffman_node* a, huffman_node* b)
{
    return *a < *b;
}

huffman_node *huffman_encode(const char *buffer, size_t size)
{
    std::vector<huffman_node*> nodes;
    for (int i = 0; i < 256; ++i)
    {
        auto *node = new huffman_node();
        node->ch = (char)i;
        nodes.push_back(node);
    }
    
    for (size_t i = 0; i < size; ++i)
    {
        ++(nodes[buffer[i]]->weight);
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
    
    std::sort(nodes.begin(), nodes.end(), compptr);
    
    while (nodes.size() >= 2)
    {
        auto *a = nodes[0];
        auto *b = nodes[1];
        nodes.erase(nodes.begin(), nodes.begin() + 2);
        
        auto *new_node = new huffman_node();
        new_node->weight = a->weight + b->weight;
        new_node->left = a;
        new_node->right = b;
        
        if (nodes.size() == 0)
        {
            nodes.push_back(new_node);
        }
        else
        {
            size_t pos = 1 + binsearch(nodes, new_node);
            nodes.insert(nodes.begin() + pos, new_node);
        }
    }
    
    return nodes[0];
}