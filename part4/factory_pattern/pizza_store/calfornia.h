#ifndef NEWYORKSTORE_H
#define NEWYORKSTORE_H

#include "pizza_store.h"

class CaliforniaStore : public PizzaStore {
public:
  Pizza* pizza;
  Pizza* createPizza(string type) {
    if (type == "cheese") {
      pizza = new CheesePizza();
    } 
    else if (type == "pepperoni") 
    {
      pizza = new PepperoniPizza();
    }
    else 
    {
      pizza = new GreekPizza();
    }
  return pizza;
  }
};


#endif