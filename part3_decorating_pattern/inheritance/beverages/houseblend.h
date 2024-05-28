#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H

#include "beverage.h"
#include "../condiment/beverage_size.h"
#include "../const/size.h"

class HouseBlend : public Beverage {
public:
  HouseBlend() { description = "하우스 블렌드 커피"; }

  string getDescription() override { return description; }

  double cost () override {
    double houseBlendBasicPrice = 2900;
    return houseBlendBasicPrice;
  }
};

#endif