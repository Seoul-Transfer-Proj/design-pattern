#ifndef SOY_H
#define SOY_H

#include "condiment_decorator.h"
#include "../beverages/beverage.h"

class Soy : public CondimentDecorator {
private:
  Beverage* beverage;
public:
  Soy(Beverage* beverage){
    this->beverage = beverage;
  }

  string getDescription() override {
    return beverage->getDescription() + ", Soy";
  }

  double cost() override {
    double soyPrice = 300;
    return soyPrice + beverage->cost();
  }
};

#endif