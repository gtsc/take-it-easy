#include "board.hpp"

#include "tile/tile.hpp"

namespace tie {
double Func(const double a, const double b) { return FuncTile(a, b) + b; }
}  // namespace tie