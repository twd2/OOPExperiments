#ifndef _FSYGDMATCHINGSTRATEGY_H_
#define _FSYGDMATCHINGSTRATEGY_H_

#include "TemplateMatchingStrategy.h"

using std::size_t;
using std::ptrdiff_t;

class FsygdMatchingStrategy : public TemplateMatchingStrategy
{
protected:
    double matchSameSize(const Image&, const Image&) override;
};

#endif // _TEMPLATEMATCHINGSTRATEGY_H_
