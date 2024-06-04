#ifndef MELL_H
#define MELL_H

#include "menuitem.h"
#include "menu.h"
#include "./iterator/dinner_menu.h"
#include <vector>

class DinnerMenu : public Menu {
private:
  const static int MAX_ITEMS = 6;
  MenuItem menuItmes[MAX_ITEMS];
  int numberOfItems = 0;
public:
  DinnerMenu() {
    addItem("채식주의자용 BLT", "통밀 위에 콩고기 베이컨 상추, 토마토를 얹은 메뉴", true, 2.99);
    addItem("BLT", "통밀 위에 베이컨, 상추, 토마토를 얹은 메뉴", false, 2.99);
    addItem("오늘의 스프", "감자 샐러드를 곁들인 오늘의 스프", false, 3.49);
    addItem("핫도그", "사워크라우트, 갖은 양념, 양파, 치즈가 곁들여진 핫도그", true, 3.05);
  }

  void addItem(string name, string description, bool vegetarian, double price) {
    MenuItem newMenuItem = MenuItem(name, description, vegetarian, price);
    if (numberOfItems >= MAX_ITEMS) {
      cout << "죄송합니다. 메뉴가 꽉찼어요. 더 이상 메뉴를 추가할 수 없어요.";
    } else {
      menuItmes[numberOfItems] = newMenuItem;
      numberOfItems += 1;
    }
  }

  Iterator* createIterator() {
    return new DinnerMenuIterator(menuItmes, MAX_ITEMS);
  }
};

#endif