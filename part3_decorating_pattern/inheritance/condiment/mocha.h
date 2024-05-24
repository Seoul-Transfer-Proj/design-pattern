#ifndef MOCHA_H
#define MOCHA_H

#include "condiment_decorator.h"
#include "../beverages/beverage.h"

class Mocha : public CondimentDecorator {
private:
  Beverage* beverage;
public:
  Mocha(Beverage* beverage){
    this->beverage = beverage;
  }
  ~Mocha(){ delete beverage; }

  string getDescription() override {
    return beverage->getDescription() + ", Mocha";
  }

  double cost() override {
    double mochaPrice = 1000;
    return mochaPrice + beverage->cost();
  }
};

#endif