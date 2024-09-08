#### **NOTWORKING

# GigaInt

**GigaInt** is a C++ library designed to handle large integer types, such as `uint128`, `int128`, `uint256`, `int256`, and more. The library provides a robust framework for working with these extended integer types using familiar arithmetic and comparison operations, just like built-in types.

## Features

- **Custom Large Integer Types**: Support for 128-bit and 256-bit unsigned and signed integers (`uint128`, `int128`, `uint256`, `int256`).
- **Operator Overloading**: Seamless integration of standard arithmetic operations (`+`, `-`, `*`, `/`) and comparison operations (`==`, `<`, `>`).
- **Bitwise Operations**: Full support for bitwise operations (`&`, `|`, `^`, `<<`, `>>`).
- **Cross-platform Compatibility**: Works across different operating systems and compilers that support modern C++ standards.
- **Ease of Use**: Intuitive syntax similar to built-in types, allowing easy integration into existing C++ projects.

## Example Usage

```cpp
#include "GigaInt.h"

int main() {
    GigaInt::uint128_t a(0xFFFFFFFFFFFFFFFF, 0xFFFFFFFFFFFFFFFF);  // max uint128
    GigaInt::uint128_t b(1, 0);  // 128-bit representation of 1

    GigaInt::uint128_t c = a + b;  // Perform addition

    std::cout << "Result: " << c << std::endl;

    return 0;
}
```

## Installation

To use **GigaInt** in your project, simply clone the repository and include the `GigaInt.h` header in your project.

```bash
git clone https://github.com/yourusername/GigaInt.git
```

Then, include the header file in your code:

```cpp
#include "GigaInt.h"
```

## Contributing
Contributions are welcome! Feel free to submit issues, feature requests, or pull requests to help improve the library.

## License
This project is licensed under the MIT License. See the LICENSE file for details.