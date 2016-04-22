#ifndef _BRUTEFORCE_STRATEGY_H_
#define _BRUTEFORCE_STRATEGY_H_

#include "MatchStrategy.h"
#include <cmath>

class BruteforceStrategy : public MatchStrategy
{
public:
    virtual double Match(const Image&, const Image&) override;
};

#endif // _BRUTEFORCE_STRATEGY_H_