#ifndef DESSERTITERATOR_H
#define DESSERTITERATOR_H

#include "iterator.h"
#include <vector>

class DessertMenuIterator : public Iterator {
private:
  vector<MenuItem> menuItems;
  int position = 0;
public:
  DessertMenuIterator(vector<MenuItem> menuItems) {
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
