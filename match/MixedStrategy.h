#ifndef _MIXEDSTRATEGY_H_
#define _MIXEDSTRATEGY_H_

#include "MatchStrategy.h"
#include <vector>

class MixedStrategy : public MatchStrategy, public std::vector<std::pair<double, MatchStrategy&> >
{
public:
    double Match(Image&, Image&) override;
};

#endif // _MIXEDSTRATEGY_H_