#ifndef CHEESE_H
#define CHEESE_H

#include "pizza_factory.h"
#include "../pizza.h"

class CheesePizzaFactory : public PizzaFactory {
public:
  Pizza* createPizza() {
    pizza = new CheesePizza();
    return pizza;
  }
};

#endif