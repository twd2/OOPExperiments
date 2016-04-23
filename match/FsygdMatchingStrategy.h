#ifndef _TEMPLATEMATCHINGSTRATEGY_H_
#define _TEMPLATEMATCHINGSTRATEGY_H_

#include "TemplateMatchingStrategy.h"
#include <cmath>
#include <cstddef>
#include <iostream>

using std::size_t;
using std::ptrdiff_t;

class FsygdMatchingStrategy : public TemplateMatchingStrategy
{
protected:
    double matchSameSize(const Image&, const Image&);
};

#endif // _TEMPLATEMATCHINGSTRATEGY_H_
