add_executable(take-it-easy take-it-easy.cpp)
install (TARGETS take-it-easy DESTINATION bin)
target_link_libraries(take-it-easy board)
set_target_properties(take-it-easy PROPERTIES LINKER_LANGUAGE CXX CXX_STANDARD 20)

add_subdirectory(board)