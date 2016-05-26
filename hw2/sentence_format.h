#ifndef _SENTENCE_FORMAT_H_
#define _SENTENCE_FORMAT_H_

#include <iostream>

#include "sentence.h"

class sentence_format
{
public:
    virtual ~sentence_format() = default;
    virtual sentences parse(std::istream &ins) = 0;
    virtual void write(const sentences &sents, std::ostream &outs) = 0;
};

#endif // _SENTENCE_FORMAT_H_
