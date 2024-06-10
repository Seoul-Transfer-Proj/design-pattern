#ifndef MENUITEMCOMPONENT_H
#define MENUITEMCOMPONENT_H

#include "component.h"
#include <iostream>
using namespace std;

class MenuItem : public MenuComponent {
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
  void print() {
    cout << name << endl;
    cout << description << endl;
    cout << price << endl;
    cout << vegetarian << endl;
  }
};

#endif