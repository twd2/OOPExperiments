#include "MixedStrategy.h"

double MixedStrategy::Match(Image &input, Image &temp)
{
    double totalWeight = 0.0, total = 0.0;
    for (auto &p : *this)
    {
        total += p.second->Match(input, temp);
        totalWeight += p.first;
    }
    return total / totalWeight;
}