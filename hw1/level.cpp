#include "level.h"

const std::map<std::string, level_t> level::levels = 
{
    {"warning", warning},
    {"error", error},
    {"fatal", fatal}
};

level_t level::to_level(const std::string &name)
{
    auto iter = levels.find(name);
    
    if (iter == levels.end())
    {
        throw std::string("Unsupported level");
    }
    
    return iter->second;
}