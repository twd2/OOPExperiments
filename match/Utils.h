#ifndef _UTILS_H_
#define _UTILS_H_

#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <memory>
#include "lodepng.h"

#ifdef _WIN32
#include <Windows.h>
#else
#include <dirent.h>
#endif

#include "Image.h"

std::vector<std::string> GetFileNames(const std::string &strDir);
bool EndsWith(const std::string &fullString, const std::string &ending);

Image ReadPNG(const std::string &filename);

#endif 