#ifndef CAFEITERATOR_H
#define CAFEITERATOR_H

#include "iterator.h"
#include <unordered_map>
#include <iostream>
using namespace std;

class CafeIterator : public Iterator {
private:
  unordered_map<string, MenuItem>::iterator current;
  unordered_map<string, MenuItem>::iterator end;
public:
  CafeIterator(unordered_map<string, MenuItem> &menuItems) {
    this->current = menuItems.begin();
    this->end = menuItems.end();
  }

  bool hasNext() {
    return current != end;
  }

  MenuItem next() {
    MenuItem menuItem = current->second;
    ++current;
    return menuItem;
  }
};

#endif