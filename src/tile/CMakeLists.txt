#create library
add_library(tile STATIC
	tile.cpp tile.hpp
)

set_target_properties(tile PROPERTIES LINKER_LANGUAGE CXX CXX_STANDARD 20)