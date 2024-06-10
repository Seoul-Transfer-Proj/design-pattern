#ifndef NEWYORKPIZZA_H
#define NEWYORKPIZZA_H

#include "../pizza.h"

class NewYorkPizza : public Pizza {};

class NyStyleCheesePizza : public NewYorkPizza {
public:
  NyStyleCheesePizza();
};
class NyStyleVeggiePizza : public NewYorkPizza {
public:
  NyStyleVeggiePizza();
};
class NyStylePepperoniPizza : public NewYorkPizza {
public:
  NyStylePepperoniPizza();
};

#endif