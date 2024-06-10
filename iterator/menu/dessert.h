#ifndef DESSERT_H
#define DESSERT_H

#include "menu.h"
#include "../iterator/dessert.h"
#include <vector>

class DessertMenu : public Menu{
private:
  vector<MenuItem> menuItems;
public:
  DessertMenu() {
    menuItems = vector<MenuItem> {};
    addItem("뺵스커피", "맛있는 커피", true, 2.99);
    addItem("베스키라빈스", "요거트 아이스크림", false, 2.99);
    addItem("시리얼", "달달한 시리얼", true, 3.49);
    addItem("방울토마토", "달콤한 방울토마토", false, 3.59);
  }

  void addItem(string name, string description, bool vegetarian, double price) {
    MenuItem newMenuItem = MenuItem(name, description, vegetarian, price);
    menuItems.push_back(newMenuItem);
  }

  Iterator* createIterator() {
    return new DessertMenuIterator(menuItems);
  }
};

#endif