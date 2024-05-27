#ifndef CHICAGO_H
#define CHICAGO_H

#include "pizza_factory.h"
#include "../pizza.h"

class ChicagoPizzaFactory : public PizzaFactory {
public:
  Pizza* createPizza() {
    pizza = new ChicagoPizza();
    return pizza;
  }
};

#endif