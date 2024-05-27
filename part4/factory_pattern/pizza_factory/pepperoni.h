#ifndef PEPPERONI_H
#define PEPPERONI_H

#include "pizza_factory.h"
#include "../pizza.h"

class PepperoniPizzaFactory : public PizzaFactory {
public:
  Pizza* createPizza() {
    pizza = new PepperoniPizza();
    return pizza;
  }
};

#endif