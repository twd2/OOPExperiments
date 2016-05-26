#include "Notation.h"

#include <fstream>

void Notation::load(const std::string &filename)
{
    std::ifstream ifs(filename, std::ios_base::in);

    notation += std::string(std::istreambuf_iterator<char>(ifs),
                            std::istreambuf_iterator<char>());

    ifs.close();
}
