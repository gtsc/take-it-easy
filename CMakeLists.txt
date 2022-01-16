cmake_minimum_required(VERSION 3.20)
project(TakeItEasyProject CXX)

# sets variables for directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# be very expressive in terms of warnings, compilations fails on warning
add_compile_options(-Wall -Wextra -pedantic -Werror)
# set C++20
add_compile_options(-std=c++20)

# add all subdirectories
add_subdirectory(src)