#include "waitress.h"

int main() {

  PancakeHouseMenu panCakeHouseMenu = PancakeHouseMenu();
  DinnerMenu dinnerMenu = DinnerMenu();
  Waitress waitRess = Waitress(panCakeHouseMenu, dinnerMenu);

  waitRess.printMenu();
  waitRess.printVegetarianMenu();

  return 0;  
};