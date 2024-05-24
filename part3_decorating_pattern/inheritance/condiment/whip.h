#ifndef WHIP_H
#define WHIP_H

#include "condiment_decorator.h"
#include "../beverages/beverage.h"

class Whip : public CondimentDecorator {
private:
  Beverage* beverage;
public:
  Whip(Beverage* beverage) {
    this->beverage = beverage;
  }

  string getDescription() override {
    return beverage->getDescription() + ", Whip";
  }

  double cost() override {
    double whipPrice = 500;
    return whipPrice + beverage->cost();
  }
};

#endif