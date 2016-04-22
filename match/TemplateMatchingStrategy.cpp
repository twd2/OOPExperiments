#include "TemplateMatchingStrategy.h"

double TemplateMatchingStrategy::Match(Image &input, Image &temp)
{
    // assume size of input is greater than size of template
    Image smallTemp(temp, temp.Width - 20, temp.Height - 20, 10, 10); // no border
    double m = -1.0;
    for (size_t oy = 0; oy < (input.Height - smallTemp.Height); ++oy)
    {
        for (size_t ox = 0; ox < (input.Width - smallTemp.Width); ++ox)
        {
            Image partialInput(input, smallTemp.Width, smallTemp.Height, ox, oy);
            double currentMatch = matchSameSize(partialInput, smallTemp);
            if (m < 0 || currentMatch < m)
            {
                m = currentMatch;
            }
        }
    }
    return m;
}

double TemplateMatchingStrategy::matchSameSize(const Image &input, const Image &temp)
{
    // assume size of input is equal to size of template
    double count = 0.0, diff = 0.0;
    for (size_t y = 0; y < temp.Height; ++y)
    {
        for (size_t x = 0; x < temp.Width; ++x)
        {
            diff += std::abs(input(x, y, CHANNEL_R) - temp(x, y, CHANNEL_R)) + 
                    std::abs(input(x, y, CHANNEL_G) - temp(x, y, CHANNEL_G)) + 
                    std::abs(input(x, y, CHANNEL_B) - temp(x, y, CHANNEL_B));
            count += 1.0;
        }
    }
    
    // normalize
    return diff / count;
}