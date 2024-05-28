#ifndef ESPRESSO_H
#define ESPRESSO_H

#include "beverage.h"
#include "../condiment/beverage_size.h"
#include "../const/size.h"

class Espresso : public Beverage {
public:
  Espresso() { description = "Espresso"; }
  string getDescription() override { return description; }
  double cost () override {
    double espressoBasicPrice = 2800;
    return espressoBasicPrice;
  }
};

#endif