#ifndef MENU_H
#define MENU_H

#include "../iterator/iterator.h"

class Menu {
public:
  virtual Iterator* createIterator() = 0;
};

#endif