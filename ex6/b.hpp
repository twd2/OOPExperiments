#ifndef _B_HPP_
#define _B_HPP_

template <typename T, size_t SIZE>
class FixedArray
{
private:
    T _Data[SIZE];
public:
    constexpr size_t size() const
    {
        return SIZE;
    }
};

#endif // _B_HPP_