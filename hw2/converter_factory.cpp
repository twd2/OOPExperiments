#include "converter_factory.h"

#include "format_prompt.h"
#include "format_mlf.h"

converter converter_factory::create(const std::string &name)
{
    if (name == "1")
    {
        return std::make_pair(std::make_shared<format_prompt>(),
                              std::make_shared<format_mlf>());
    }
    else if (name == "2")
    {
        return std::make_pair(std::make_shared<format_mlf>(),
                              std::make_shared<format_prompt>());
    }
    
    throw std::string("Unknown converter type.");
}