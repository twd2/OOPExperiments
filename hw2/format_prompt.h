#ifndef _FORMAT_PROMPT_H_
#define _FORMAT_PROMPT_H_

#include <iostream>

#include "sentence.h"
#include "sentence_format.h"

class format_prompt
    : public sentence_format
{
public:
    sentences parse(std::istream &ins) override;
    void write(const sentences &sents, std::ostream &outs) override;
};

#endif // _FORMAT_PROMPT_H_
