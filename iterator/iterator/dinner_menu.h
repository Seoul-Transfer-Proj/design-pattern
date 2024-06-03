#ifndef DINNERMENUITERATOR_H
#define DINNERMENUITERATOR_H

#include "iterator.h"


class DinnerMenuIterator : public Iterator {
private:
  MenuItem* menuItems;
  int arraySize;
  int position = 0;
public:
  DinnerMenuIterator(MenuItem* menuItems, int size) {
    this->menuItems = menuItems;
    arraySize = size;
  }

  bool hasNext() {
    if ( position >= arraySize ) {
      return false;
    } else {
      return true;
    }
  }

  MenuItem next() {
    MenuItem menuItem = *(menuItems + position);
    position += 1;
    return menuItem;
  }
};

#endif
