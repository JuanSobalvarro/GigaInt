cmake_minimum_required(VERSION 3.10)
project(GigaInt)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)

# Include header files
include_directories(include)

# Add test executable
add_executable(test_GigaInt tests/test_uint128.cpp)

# Link with any additional libraries if needed (none in this simple example)
