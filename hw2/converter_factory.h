#ifndef _CONVERTER_FACTORY_H_
#define _CONVERTER_FACTORY_H_

#include <utility>
#include <memory>
#include <string>

#include "sentence_format.h"

typedef std::pair<std::shared_ptr<sentence_format>, std::shared_ptr<sentence_format> > converter;

class converter_factory
{
public:
    static converter create(const std::string &name);
};

#endif // _CONVERTER_FACTORY_H_
