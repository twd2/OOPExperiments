#ifndef _NOTATION_H_
#define _NOTATION_H_

#include <string>

class Notation
{
public:
    std::string notation = "";
    void load(const std::string &filename);
};

#endif // _NOTATION_H_
