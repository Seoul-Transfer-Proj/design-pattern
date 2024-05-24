#ifndef MILK_H
#define MILK_H

#include "condiment_decorator.h"
#include "../beverages/beverage.h"
#include <iostream>
using namespace std;

class Milk : public CondimentDecorator {
private:
  Beverage* beverage;
public:
  Milk(Beverage* beverage) {
    this->beverage = beverage;
  }
  ~Milk(){ delete beverage; }

  string getDescription() override {
    return beverage->getDescription() + ", Milk";
  }

  double cost() override {
    double milkPrice = 1200;
    return milkPrice + beverage->cost();
  }
};

#endif