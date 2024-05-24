#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H

#include "beverage.h"

class HouseBlend : public Beverage {

public:
  HouseBlend() { description = "하우스 블렌드 커피"; }

  string getDescription() override { 
    string orderedSize = getStringFromSize(getSize());
    return orderedSize + " 크기의" + description ; 
  }

  double cost () override {
    switch (getSize())
    {
    case Size::TALL:
      return 3000;
      break;
    case Size::VENTI:
      return 4000;
    case Size::GRANDE:
      return 4500;
    default:
      return 3000;
      break;
    }
  }
};

#endif