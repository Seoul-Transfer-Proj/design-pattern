#ifndef NEWYORK_H
#define NEWYORK_H

#include "pizza_factory.h"
#include "../pizza.h"

class NewYorkPizzaFactory : public PizzaFactory {
public:
  Pizza* createPizza() {
    pizza = new NewYorkPizza();
    return pizza;
  }
};

#endif