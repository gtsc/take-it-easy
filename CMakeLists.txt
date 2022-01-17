cmake_minimum_required(VERSION 3.16)
project(TakeItEasyProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# sets variables for directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# bring the headers into the project
include_directories(${PROJECT_SOURCE_DIR}/src)

# be very expressive in terms of warnings, compilations fails on warning
add_compile_options(-Wall -Wextra -pedantic -Werror)
# set C++20
add_compile_options(-std=c++20)

# add all subdirectories
add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(lib/googletest)
