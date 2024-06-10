#ifndef PANCAKEITERATOR_H
#define PANCAKEITERATOR_H

#include "iterator.h"
#include <vector>
#include <iostream>
using namespace std;

class PancakeIterator : public Iterator {
private:
  vector<MenuItem> menuItems;
  int position = 0;
public:
  PancakeIterator(vector<MenuItem> menuItems) {
    this->menuItems = menuItems;
  }

  bool hasNext() {
    if ( position >= menuItems.size() ) {
      return false;
    } else {
      return true;
    }
  }

  MenuItem next() {
    MenuItem menuItem = menuItems[position];
    position += 1;
    return menuItem;
  }
};

#endif