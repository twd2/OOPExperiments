#ifndef _HISTOGRAMSTRATEGY_H_
#define _HISTOGRAMSTRATEGY_H_

#include "TemplateMatchingStrategy.h"

class HistogramStrategy : public TemplateMatchingStrategy
{
protected:
    double matchSameSize(const Image&, const Image&) override;
};
#endif // _HISTOGRAMSTRATEGY_H_
