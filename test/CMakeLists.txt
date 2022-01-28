add_executable(tie-unit-test run-all-tests.cpp board-test.cpp)
add_test(NAME tie-unit-test COMMAND tie-unit-test)
target_link_libraries(tie-unit-test PUBLIC board gtest)

add_test(NAME UnitTests COMMAND tie-unit-test)