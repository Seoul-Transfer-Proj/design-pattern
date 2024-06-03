#ifndef WAITRESS_H
#define WAITRESS_H

#include "roux.h"
#include "mell.h"

class Waitress {
private:
  PancakeHouseMenu panCakeHouseMenu;
  DinnerMenu dinnerMenu;
public:
  
  Waitress(PancakeHouseMenu panCakeHouseMenu, DinnerMenu dinnerMenu) {
    this->panCakeHouseMenu = panCakeHouseMenu;
    this->dinnerMenu = dinnerMenu;
  }

  void printMenu() {
    Iterator* panCakeIterator = panCakeHouseMenu.createIterator();
    Iterator* dinnerIterator = dinnerMenu.createIterator();

    cout << "아침 메뉴 출력" << endl;
    printMenu(panCakeIterator);
    cout << "점심 메뉴 출력" << endl;
    printMenu(dinnerIterator);
  }

  void printMenu(Iterator* iterator) {
    while(iterator->hasNext()) {
      MenuItem menuItem = iterator->next();
      cout << menuItem.getName() << endl;
    }
  }

  void printVegetarianMenu() {
    Iterator* panCakeIterator = panCakeHouseMenu.createIterator();
    Iterator* dinnerIterator = dinnerMenu.createIterator();

    cout << "아침 비건 메뉴 출력" << endl;
    printVegetarianMenu(panCakeIterator);
    cout << "점심 비건 메뉴 출력" << endl;
    printVegetarianMenu(dinnerIterator);
  }


  void printVegetarianMenu(Iterator* iterator) {
    while (iterator->hasNext())
    {
      MenuItem menuItem = iterator->next();
      if (menuItem.isVegetarian()){
        cout << menuItem.getName() << endl;
      }
    }
  }

  bool isItemVegetarian(string name, Iterator* iterator) {
    bool isVegetarian = false;

    while (iterator->hasNext())
    {
      MenuItem menuItem = iterator->next();
      if (menuItem.getName() == name ){
        if (menuItem.isVegetarian()) {
        cout << menuItem.getName() << endl;
        isVegetarian = true;
        }
      }
    }
    return isVegetarian;
  }

};

#endif 