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

# enables testing via ctest
enable_testing()

# custom lines for generating code coverage information
set(OBJECT_DIR ${CMAKE_BINARY_DIR}/test/CMakeFiles/tie-unit-test.dir)

add_custom_target(gcov
    COMMAND mkdir -p ${OBJECT_DIR}
    COMMAND mkdir -p gcoverage
    COMMAND ${CMAKE_MAKE_PROGRAM} tie-unit-test
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    )
add_custom_command(TARGET gcov
    COMMAND echo "=================== GCOV ===================="
    COMMAND gcov -b ${CMAKE_SOURCE_DIR}/test/unit-test/*.cpp -o ${OBJECT_DIR} -o ${OBJECT_DIR}
    COMMAND echo "-- Source directory: ${CMAKE_SOURCE_DIR}/test/unit-test/"
    COMMAND echo "-- Coverage files have been output to ${CMAKE_BINARY_DIR}/gcoverage"
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/gcoverage
    )

# add all subdirectories
add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(lib/googletest)
