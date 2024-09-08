#ifndef GIGAINT_H
#define GIGAINT_H

#include <iostream>

namespace GigaInt
{

class uint128_t
{
public:
    // Constructors 
    uint128_t(uint64_t high = 0, uint64_t low = 0) : high_(high), low_(low){}


    // Overload operators
    inline uint128_t operator +(const uint128_t& other) const
    {
        uint64_t low = low_ + other.low_;
        uint64_t high = high_ + other.high_ + (low < low_);
        return uint128_t(high, low);
    }

    inline bool operator ==(const uint128_t& other) const
    {
        return (other.low_ == low_) && (other.high_ == high_);
    } 

    inline friend std::ostream& operator <<(std::ostream& os, const uint128_t& val)
    {
        os << val.high_ << val.low_;
        return os;
    }

private:
    uint64_t high_, low_;
};

} // namespace GigaInt

#endif // GIGAINT_H