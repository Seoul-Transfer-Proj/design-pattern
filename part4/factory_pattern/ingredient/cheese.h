#ifndef CHEESE_H
#define CHEESE_H

#include "ingredient.h"
#include <iostream>
using namespace std;

class Cheese : public Ingredient {};

class MozzarellaCheese : public Cheese {
public:
  MozzarellaCheese() { cout << "MozzarellaCheese" << endl; }
};
class ReggianoCheese : public Cheese {
public:
  ReggianoCheese() { cout << "ReggianoCheese" << endl; }
};
class GoatCheese : public Cheese {
public:
  GoatCheese() { cout << "GoatCheese" << endl; }
};

#endif