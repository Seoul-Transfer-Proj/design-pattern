#ifndef WAITRESSCOMPOSITE_H
#define WAITRESSCOMPOSITE_H

#include "component.h"

class WaitRess {
private:
  MenuComponent* allMenus;
public:
  WaitRess(MenuComponent* allMenus) { this->allMenus = allMenus; }

  void printMenu() {
    allMenus->print();
  }
};

#endif 