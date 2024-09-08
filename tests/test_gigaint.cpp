#include <GigaInt/GigaInt.h>
#include <cassert>
#include <iostream>

void test_uint128();

int main() {
    
    test_uint128();

    return 0;
}

void test_uint128()
{
    GigaInt::uint128_t a(0xFFFFFFFFFFFFFFFF, 0xFFFFFFFFFFFFFFFF);  // max uint128
    GigaInt::uint128_t b(1, 0);  // 128-bit representation of 1

    GigaInt::uint128_t c = a + b;  // Perform addition

    std::cout << "Result: " << c << std::endl;

    // Example assertion (you should add more comprehensive tests)
    assert(c == GigaInt::uint128_t(0x0000000000000000, 0x0000000000000000)); // Adjust based on expected value
}