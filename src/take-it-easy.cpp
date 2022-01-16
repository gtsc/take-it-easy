#include <iostream>

#include "board/board.hpp"
#include "tile/tile.hpp"

int main() {
  const double a = 2.;
  std::cout << "Hello World (summing 2 + 5): " << tie::FuncTile(a, 5.) << std::endl;
  return 0;
}