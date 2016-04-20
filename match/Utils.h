#ifndef _UTILS_H_
#define _UTILS_H_

#include <algorithm>
#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> GetFileNames(const std::string &strDir);
bool EndsWith(const std::string &fullString, const std::string &ending);

template <typename T>
std::string operator+(const std::string &a, const T &b)
{
    std::stringstream ss;
    ss << a << b;
    return ss.str();
}

#endif 