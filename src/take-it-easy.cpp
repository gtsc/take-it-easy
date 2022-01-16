#include <iostream>

#include "board/board.hpp"

int main() {
  const double a = 2.;
  std::cout << "Hello World (summing 2 + 5): " << tie::Func(a, 5.) << std::endl;
  return 0;
}