#ifndef CAFEMENU_H
#define CAFEMENU_H

#include "menuitem.h"
#include "menu.h"
#include "../iterator/cafe.h"
#include <iostream>
using namespace std;
#include <unordered_map>


class CafeMenu : public Menu {
private:
  unordered_map<string, MenuItem> menuItems;
public:
  CafeMenu() {
    addItem("베지 버거와 에어 프라이", "통밀빵, 상추, 토마토, 감자 튀김이 첨가된 베지 버거", true, 3.99);
    addItem("오늘의 스프", "샐러드가 곁들여진 오늘의 스프", false, 3.69);
    addItem("통 핀토콩과 살사", "구아카몰이 곁들여진 푸짐한 부리토", true, 4.29);
  }

  void addItem(string name, string description, bool vegetarian, double price) {
    MenuItem newMenuItem = MenuItem(name, description, vegetarian, price);
    menuItems[name] = newMenuItem;
  }

  Iterator* createIterator () {
    Iterator* cafeIterator = new CafeIterator(menuItems);
    return cafeIterator;
  }
  
};

#endif