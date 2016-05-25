#ifndef _SENTENCE_H_
#define _SENTENCE_H_

#include <vector>
#include <string>

class sentence
{
public:
    std::string name = "";
    std::vector<std::string> tokens{};
};

typedef std::vector<sentence> sentences;

#endif // _SENTENCE_H_
