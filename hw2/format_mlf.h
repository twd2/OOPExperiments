#ifndef _FORMAT_MLF_H_
#define _FORMAT_MLF_H_

#include <iostream>

#include "sentence.h"
#include "sentence_format.h"

class format_mlf
    : public sentence_format
{
public:
    sentences parse(std::istream &ins) override;
    void write(const sentences &sents, std::ostream &outs) override;
};

#endif // _FORMAT_MLF_H_
