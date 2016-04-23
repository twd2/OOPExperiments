#include "wuhzMatchingStrategy.h"

double wuhzMatchingStrategy::matchSameSize(const Image &input, const Image &temp)
{
    double count_three_dim[2] = {0}, diff_three_dim[2] = {0};
    for (size_t y = 0; y < temp.Height; ++y)
    {
        for (size_t x = 0; x < temp.Width; ++x)
        {
            double temporary_diff = 0;
            double temporary_diff_double_dim[3] = {0};
            double temporary_mindouble = 100000000;
            temporary_diff_double_dim[0] = std::pow((input(x, y, CHANNEL_R) - temp(x, y, CHANNEL_R)), 2) + 
                                           std::pow((input(x, y, CHANNEL_G) - temp(x, y, CHANNEL_G)), 2);
            temporary_diff_double_dim[1] = std::pow((input(x, y, CHANNEL_G) - temp(x, y, CHANNEL_G)), 2) +
                                           std::pow((input(x, y, CHANNEL_B) - temp(x, y, CHANNEL_B)), 2);
            temporary_diff_double_dim[2] = std::pow((input(x, y, CHANNEL_R) - temp(x, y, CHANNEL_R)), 2) + 
                                           std::pow((input(x, y, CHANNEL_B) - temp(x, y, CHANNEL_B)), 2);
            for (size_t z = 0; z < 3; ++z)
            {
                if(temporary_diff_double_dim[z] < temporary_mindouble)
                    temporary_mindouble = temporary_diff_double_dim[z];
                temporary_diff += temporary_diff_double_dim[z];
            }
            
            temporary_diff = temporary_diff / 2;
            temporary_diff = std::min(temporary_diff, temporary_mindouble * 3 / 2);
            
            // divide into 4 blocks
            if (y < (temp.Height / 2))
            {
                diff_three_dim[0] += temporary_diff;
                count_three_dim[0] += 1.0;
            }
            else if (y >= (temp.Height / 2) && y < (temp.Height))
            {
                diff_three_dim[1] += temporary_diff;
                count_three_dim[1] += 1.0;
            }
        }
    }
    
    double wanted_diff = -10;
    for (size_t i = 0; i < 2; i++)
    {
		diff_three_dim[i] /= count_three_dim[i]; // normalize
        if(wanted_diff < 0 || diff_three_dim[i] < wanted_diff)
            wanted_diff = diff_three_dim[i];
    }
    return sqrt(wanted_diff);
}
