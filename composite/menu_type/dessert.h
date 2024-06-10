#ifndef DESSERTMENU_H
#define DESSERTMENU_H

#include "../component.h"
#include "../menu_item.h"
#include "menu.h"
#include <vector>

class DessertMenu : public Menu {
public:
  DessertMenu(string name, string description) : Menu(name, description) {
    addItem("뺵스커피", "맛있는 커피", true, 2.99);
    addItem("베스키라빈스", "요거트 아이스크림", false, 2.99);
    addItem("시리얼", "달달한 시리얼", true, 3.49);
    addItem("방울토마토", "달콤한 방울토마토", false, 3.59);
  }

  void addItem(string name, string description, bool vegetarian, double price) {
    MenuComponent* newMenuItem = new MenuItem(name, description, vegetarian, price);
    menuComponents.push_back(newMenuItem);
  }
};

#endif