#include "beverage_size.h"

double BeverageSize::cost() {
  switch (beverage->getSize())
    {
    case Size::TALL:
      return 1.0 * beverage->cost();
      break;
    case Size::VENTI:
      return 1.2 * beverage->cost();
    case Size::GRANDE:
      return 1.5 * beverage->cost();
    default:
      return 1.0 * beverage->cost();
      break;
    }
}
