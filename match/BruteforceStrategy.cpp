#include "BruteforceStrategy.h"

double BruteforceStrategy::Match(const Image &src, const Image &wanted)
{
    double count = 0.0, diff = 0.0;
    for (size_t y = 0; y < wanted.Height; ++y)
    {
        for (size_t x = 0; x < wanted.Width; ++x)
        {
            diff += std::abs(src(x, y, CHANNEL_R) - wanted(x, y, CHANNEL_R)) + 
                    std::abs(src(x, y, CHANNEL_G) - wanted(x, y, CHANNEL_G)) + 
                    std::abs(src(x, y, CHANNEL_B) - wanted(x, y, CHANNEL_B));
            count += 1.0;
        }
    }
    return diff / count;
}