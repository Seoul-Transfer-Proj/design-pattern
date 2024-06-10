#ifndef LUNCH_H
#define LUNCH_H

#include "../component.h"
#include "../menu_item.h"
#include "menu.h"
#include <vector>

class LunchMenu : public Menu {
public:
  LunchMenu(string name, string description) : Menu(name, description) {
    addItem("채식주의자용 BLT", "통밀 위에 콩고기 베이컨 상추, 토마토를 얹은 메뉴", true, 2.99);
    addItem("BLT", "통밀 위에 베이컨, 상추, 토마토를 얹은 메뉴", false, 2.99);
    addItem("오늘의 스프", "감자 샐러드를 곁들인 오늘의 스프", false, 3.49);
    addItem("핫도그", "사워크라우트, 갖은 양념, 양파, 치즈가 곁들여진 핫도그", true, 3.05);
  }

  void addItem(string name, string description, bool vegetarian, double price) {
    MenuComponent* newMenuItem = new MenuItem(name, description, vegetarian, price);
    menuComponents.push_back(newMenuItem);
  }
};

#endif