#ifndef _UTILS_H_
#define _UTILS_H_

#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include "lodepng.h"

std::vector<std::string> GetFileNames(const std::string &strDir);
bool EndsWith(const std::string &fullString, const std::string &ending);

std::vector<unsigned char> ReadPNG(const std::string &filename, unsigned int &width, unsigned int &height);

#endif 