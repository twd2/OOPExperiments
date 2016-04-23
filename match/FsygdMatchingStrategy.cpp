#include "FsygdMatchingStrategy.h"

double FsygdMatchingStrategy::matchSameSize(const Image &input, const Image &temp)
{
    // assume size of input is equal to size of template
    double count = 0.0, diff = 0.0, delta_diff;
    for (size_t y = 0; y < temp.Height; ++y)
    {
        for (size_t x = 0; x < temp.Width; ++x)
        {
        	double diff_R = std::abs(input(x, y, CHANNEL_R) - temp(x, y, CHANNEL_R));
        	double diff_G = std::abs(input(x, y, CHANNEL_G) - temp(x, y, CHANNEL_G));
        	double diff_B = std::abs(input(x, y, CHANNEL_B) - temp(x, y, CHANNEL_B));
            delta_diff = (diff_R+diff_G+diff_B-std::max(std::max(diff_R, diff_G), diss_B))*1.5;
            delta_diff = std::min(delta_diff, diff_R+diff_G+diff_B);
            diff += delta_diff;
            count += 1.0;
        }
    }
    
    // normalize
    return diff / count;
}
