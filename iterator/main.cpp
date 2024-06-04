#include "waitress.h"
#include "../menu/cafe_menu.h"
#include "../menu/mell.h"
#include "../menu/roux.h"

int main() {

  PancakeHouseMenu* panCakeHouseMenu = new PancakeHouseMenu();
  DinnerMenu* dinnerMenu = new DinnerMenu();
  CafeMenu* cafeMenu = new CafeMenu();

  vector<Menu*> menus = { panCakeHouseMenu, dinnerMenu, cafeMenu };
  Waitress waitRess = Waitress(menus);

  waitRess.printMenu();
  cout << "\n" << endl;
  waitRess.printVegetarianMenu();

  delete panCakeHouseMenu;
  delete dinnerMenu;
  delete cafeMenu;

  return 0;  
};