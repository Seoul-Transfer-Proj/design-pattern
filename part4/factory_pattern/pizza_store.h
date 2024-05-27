#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "pizza.h"
#include "./pizza_factory/pizza_factory.h"

class PizzaStore {
public:
  PizzaFactory* factory;
  PizzaStore(PizzaFactory* pizzaFactory) { factory = pizzaFactory; }
  ~PizzaStore() { delete factory; }

  void setPizzaFactory(PizzaFactory* pizzaFactory);

  Pizza* orderPizza();
};

#endif