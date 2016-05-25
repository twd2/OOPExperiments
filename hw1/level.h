#ifndef _LEVEL_H_
#define _LEVEL_H_

#include <map>
#include <string>

enum level_t
{
    warning,
    error,
    fatal
};

class Log;

class level
{
private:
    static const std::map<std::string, level_t> levels;
    level_t lv;
public:
    static level_t to_level(const std::string &name);
    explicit level(const std::string &name)
    {
        lv = to_level(name);
    }
    
    friend class Log;
};

#endif // _LEVEL_H_
