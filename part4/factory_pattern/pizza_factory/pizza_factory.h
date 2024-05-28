#ifndef PIZZAFACTORY_H
#define PIZZAFACTORY_H

#include "../pizza.h"
#include <iostream>
using namespace std;

class PizzaFactory {
protected:
  Pizza* pizza;
public:
  virtual ~PizzaFactory() {}
  virtual Pizza* createPizza() = 0;
};

#endif