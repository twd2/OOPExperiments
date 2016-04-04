#include "main.h"
#include "huffman.h"

void printMap(std::map<char, std::string> &m)
{
    for (int i = 32; i <= 127; ++i)
    {
        if (m[i] != "")
        {
            cout << (char)i << " " << m[i] << endl;
        }
    }
}

void encode_string(const string &str)
{
    cout << "encoding: " << str << endl;
    size_t *freq = huffman_getfreq((const unsigned char*)str.c_str(), str.length());
    auto *root = huffman_encode(freq, 256);
    // root->Print("");
    auto m = root->ToMap();
    printMap(m);
    string code;
    for (auto ch : str)
    {
        code += m[ch];
    }
    cout << code << endl;
    delete root;
    delete [] freq;
}

int main()
{
    while (true)
    {
        string s;
        getline(cin, s);
        if (s.length() == 0)
        {
            break;
        }
        encode_string(s);
    }
    encode_string("aaaaaaabbbbbbbbbbbbbbbbbbccccdde");
    return 0;
}