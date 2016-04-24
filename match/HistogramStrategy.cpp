#include "HistogramStrategy.h"

double HistogramStrategy::matchSameSize(const Image &input, const Image &temp)
{
    double histogramTemplate[3][256] = {{0}}, histogramInput[3][256] = {{0}};

    for (size_t y = 0; y < temp.Height; ++y)
    {
        for (size_t x = 0; x < temp.Width; ++x)
        {
            ++histogramTemplate[CHANNEL_R][temp(x, y, CHANNEL_R)];
            ++histogramTemplate[CHANNEL_G][temp(x, y, CHANNEL_G)];
            ++histogramTemplate[CHANNEL_B][temp(x, y, CHANNEL_B)];
        }
    }
    
    for (size_t y = 0; y < input.Height; ++y)
    {
        for (size_t x = 0; x < input.Width; ++x)
        {
            ++histogramInput[CHANNEL_R][input(x, y, CHANNEL_R)];
            ++histogramInput[CHANNEL_G][input(x, y, CHANNEL_G)];
            ++histogramInput[CHANNEL_B][input(x, y, CHANNEL_B)];
        }
    }
    
    double diff = 0.0;
    
    for (size_t channel = 0; channel < 3; ++channel)
    {
        for (size_t c = 0; c < 256; ++c)
        {
            histogramInput[channel][c] /= (double)input.Width * (double)temp.Height;
            histogramTemplate[channel][c] /= (double)temp.Width * (double)temp.Height;
            diff += std::abs(histogramInput[channel][c] - histogramTemplate[channel][c]);
        }
    }

    // normalize
    return diff / 3;
}