#ifndef MENUITEM_H
#define MENUITEM_H

#include "../node.h"
#include <iostream>
using namespace std;

class MenuItem : public Node {
private:
  string name;
  string description;
  bool vegetarian;
  double price;
public:
  MenuItem() : name(""), description(""), vegetarian(false), price(0.0) {}
  MenuItem(string name, string description, bool vegetarian, double price) {
    this->name = name;
    this->description = description;
    this->vegetarian = vegetarian;
    this->price = price;
  }

  string getName() {
    return name;
  }
  string getDescription() {
    return description;
  }
  double getPrice() {
    return price;
  }
  bool isVegetarian() {
    return vegetarian;
  }
};

#endif