#ifndef _TEMPLATEMATCHINGSTRATEGY_H_
#define _TEMPLATEMATCHINGSTRATEGY_H_

#include "MatchStrategy.h"
#include <cmath>
#include <cstddef>
#include <iostream>

using std::size_t;
using std::ptrdiff_t;

class TemplateMatchingStrategy : public MatchStrategy
{
public:
    double Match(Image&, Image&) override;
protected:
    virtual double matchSameSize(const Image&, const Image&);
};
#endif // _TEMPLATEMATCHINGSTRATEGY_H_
