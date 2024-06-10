#ifndef PIZZA_H
#define PIZZA_H

#include "../ingredient/cheese.h"
#include "../ingredient/clam.h"
#include "../ingredient/sauce.h"
#include "../ingredient/dough.h"
#include "../ingredient_factory/factory.h"

#include <iostream>
using namespace std;


class Pizza {
protected:
  Cheese cheese;
  Clam clam;
  Sauce sauce;
  Dough dough;
public:
  string description;
  
  virtual ~Pizza() {}

  void prepare(IngredientFactory* ingredientFactory);
  void bake() { cout << description + "굽기" << endl; }
  void cut() { cout << description + "자르기" << endl; }
  void box() { cout << description + "포장하기" << endl; }
};

class CheesePizza : public Pizza {
public:
  CheesePizza();
};

class GreekPizza : public Pizza {
public:
  GreekPizza();
};

class PepperoniPizza : public Pizza {
public:
  PepperoniPizza();
};

class CaliforniaPizza : public Pizza {
public:
  CaliforniaPizza();
};

#endif