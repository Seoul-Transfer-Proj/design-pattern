#ifndef SIRUP_H
#define SIRUP_H

#include "condiment_decorator.h"
#include "../beverages/beverage.h"

class Sirup : public CondimentDecorator {
private:
  Beverage* beverage;
public:
  Sirup(Beverage* beverage) {
    this->beverage = beverage;
  }

  string getDescription() override {
    return beverage->getDescription() + ", Sirup";
  }

  double cost() override {
    double whipPrice = 300;
    return whipPrice + beverage->cost();
  }
};

#endif