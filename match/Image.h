#ifndef _IMAGE_H_
#define _IMAGE_H_

#include <vector>
#include <cstddef>
#include <memory>

using std::size_t;
using std::ptrdiff_t;

#define CHANNEL_R 0
#define CHANNEL_G 1
#define CHANNEL_B 2
#define BITDEPTH 24

class Image
{
public:
    std::shared_ptr<std::vector<unsigned char> > Raw;
    size_t DataWidth, DataHeight, Width, Height;
    size_t OffsetX, OffsetY;

    Image(std::shared_ptr<std::vector<unsigned char> > &raw, size_t DataWidth, size_t DataHeight, size_t Width, size_t Height, size_t OffsetX = 0, size_t OffsetY = 0)
        : Raw(raw), DataWidth(DataWidth), DataHeight(DataHeight), Width(Width), Height(Height), OffsetX(OffsetX), OffsetY(OffsetY)
    {
        
    }
    
    Image(std::shared_ptr<std::vector<unsigned char> > &raw, size_t Width, size_t Height)
        : Image(raw, Width, Height, Width, Height, 0, 0)
    {
        
    }
    
    // cut image constructor
    Image(Image &src, size_t Width, size_t Height, size_t OffsetX = 0, size_t OffsetY = 0)
        : Image(src.Raw, src.DataWidth, src.DataHeight, Width, Height, src.OffsetX + OffsetX, src.OffsetY + OffsetY)
    {
        
    }
    
    unsigned char &operator()(size_t x, size_t y, size_t rgbSel)
    {
        return (*Raw)[(y + OffsetY) * (DataWidth * BITDEPTH / 8) + (x + OffsetX) * BITDEPTH / 8 + rgbSel];
    }
    
    const unsigned char &operator()(size_t x, size_t y, size_t rgbSel) const
    {
        return (*Raw)[(y + OffsetY) * (DataWidth * BITDEPTH / 8) + (x + OffsetX) * BITDEPTH / 8 + rgbSel];
    }
};

#endif // _IMAGE_H_