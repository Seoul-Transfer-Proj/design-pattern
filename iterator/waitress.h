#ifndef WAITRESS_H
#define WAITRESS_H

#include "./menu/menu.h"
#include "./iterator/iterator.h"

class Waitress {
private:
  vector<Menu*> menus;
public:
  Waitress(vector<Menu*> &menus) { this->menus = menus; }

  void printMenu() {
    cout << "메뉴 출력" << endl;
    for (auto menu : menus) {
      Iterator* menuIterator = menu->createIterator();
      while(menuIterator->hasNext()) {
      MenuItem menuItem = menuIterator->next();
      cout << menuItem.getName() << endl;
      }
    }
  }

  void printVegetarianMenu() {
    cout << "비건 메뉴 출력" << endl;
    for (auto menu : menus) {
      Iterator* menuIterator = menu->createIterator();
      while (menuIterator->hasNext()) {
      MenuItem menuItem = menuIterator->next();
      if (menuItem.isVegetarian()) {
          cout << menuItem.getName() << endl;
        }
      }   
    }
  }

  bool isItemVegetarian(string name) {
    bool isVegetarian = false;

    for (auto menu : menus) 
    {
      Iterator* menuIterator = menu->createIterator();
      while (menuIterator->hasNext())
      {
        MenuItem menuItem = menuIterator->next();
        if (menuItem.getName() == name ){
            if (menuItem.isVegetarian()) {
            cout << menuItem.getName() << endl;
            isVegetarian = true;
            }
          }
      }
    }
    return isVegetarian;
  }
};

#endif 