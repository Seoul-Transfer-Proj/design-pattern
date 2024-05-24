#ifndef MINT_H
#define MINT_H

#include "condiment_decorator.h"
#include "../beverages/beverage.h"

class Mint : public CondimentDecorator {
private:
  Beverage* beverage;
public:
  Mint(Beverage* beverage) {
    this->beverage = beverage;
  }

  string getDescription() override {
    return beverage->getDescription() + ", Mint";
  }

  double cost() override {
    double whipPrice = 500;
    return whipPrice + beverage->cost();
  }
};

#endif