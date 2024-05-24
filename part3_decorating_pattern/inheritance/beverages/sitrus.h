#ifndef SITRUS_H
#define SITRUS_H

#include "beverage.h"
#include "../condiment/beverage_size.h"
#include "../const/size.h"

class Sitrus : public Beverage {
public:
  Sitrus() { description = "유자티"; }

  string getDescription() override { return description; }

  double cost () override {
    double sitrusTallPrice = 2900;
    return sitrusTallPrice;
  }
};

#endif