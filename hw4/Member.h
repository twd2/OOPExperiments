#ifndef _MEMBER_H_
#define _MEMBER_H_

#include <string>
#include <cstddef>
#include <iostream>

class Member
{
private:
    const std::string name;
    const std::size_t age;
public:
    Member(std::string name, std::size_t age)
        : name(name), age(age)
    {

    }

    Member()
        : Member("???", 0)
    {

    }

    friend std::ostream &operator<<(std::ostream &outs, const Member &mem);
};

std::ostream &operator<<(std::ostream &outs, const Member &mem);

#endif // _MEMBER_H_
