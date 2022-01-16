#create library
add_library(board STATIC
	board.cpp board.hpp
)
set_target_properties(board PROPERTIES LINKER_LANGUAGE CXX CXX_STANDARD 20)

target_link_libraries(board tile)