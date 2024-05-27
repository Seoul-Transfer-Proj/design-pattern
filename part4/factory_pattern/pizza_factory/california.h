#ifndef CALIFORNIA_H
#define CALIFORNIA_H

#include "pizza_factory.h"
#include "../pizza.h"

class CaliforniaPizzaFactory : public PizzaFactory {
public:
  Pizza* createPizza() {
    pizza = new CaliforniaPizza();
    return pizza;
  }
};

#endif