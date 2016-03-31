#include "huffman_node.h"

std::map<char, std::string> huffman_node::ToMap()
{
    std::map<char, std::string> m;
    AddMap(m, "");
    return m;
}

bool huffman_node::operator<(const huffman_node &b) const
{
    return this->weight < b.weight;
}

bool huffman_node::operator<=(const huffman_node &b) const
{
    return this->weight <= b.weight;
}

bool huffman_node::operator>(const huffman_node &b) const
{
    return this->weight > b.weight;
}

bool huffman_node::operator>=(const huffman_node &b) const
{
    return this->weight >= b.weight;
}

void huffman_node::AddMap(std::map<char, std::string> &m, std::string prefix)
{
    if (!left && !right) // leaf
    {
        m[ch] = prefix;
    }
    
    if (left)
    {
        left->AddMap(m, prefix + "0");
    }
    
    if (right)
    {
        right->AddMap(m, prefix + "1");
    }
}

void huffman_node::Print(std::string prefix)
{
    std::cout << prefix;
    
    std::cout << ch << std::endl;
    
    if (left)
    {
        left->Print(prefix + "  ");
    }
    
    if (right)
    {
        right->Print(prefix + "  ");
    }
}