#include "./menu_type/menu.h"
#include "./menu_type/breakfast.h"
#include "./menu_type/lunch.h"
#include "./menu_type/dinner.h"
#include "./menu_type/dessert.h"
#include "waitress.h"

int main () {
  MenuComponent* breakFastMenu = new PancakeHouseMenu("아침 메뉴 객체", "아침 Composite");
  MenuComponent* lunchMenu = new LunchMenu("점심 메뉴 객체", "점심 Composite");
  MenuComponent* dinnerMenu = new CafeMenu("저녁 메뉴 객체", "저녁 Composite");
  MenuComponent* dessertMenu = new DessertMenu("디저트 메뉴 객체", "디저트 Composite");
  dinnerMenu->add(dessertMenu);

  MenuComponent* allMenus = new Menu("전체 객체", "전체 복합 객체");
  allMenus->add(breakFastMenu);
  allMenus->add(lunchMenu);
  allMenus->add(dinnerMenu);

  WaitRess waitRess = WaitRess(allMenus);
  waitRess.printMenu();

  return 0;
};