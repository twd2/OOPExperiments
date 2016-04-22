#ifndef _MATCH_STRATEGY_H_
#define _MATCH_STRATEGY_H_

#include "Image.h"

class MatchStrategy
{
public:
    virtual double Match(Image&, Image&) = 0;
};

#endif 