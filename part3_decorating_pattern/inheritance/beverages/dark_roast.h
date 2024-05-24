#ifndef DARKROAST_H
#define DARKROAST_H

#include "beverage.h"
#include "../condiment/beverage_size.h"
#include "../const/size.h"

#include <iostream>
using namespace std;

class DarkRoast : public Beverage {
public:
  DarkRoast() { description = "최고의 다크 로스트 커피"; }

  string getDescription() override { return description ; }

  double cost () override {
    double darkRoastBasicPrice = 3000;
    return darkRoastBasicPrice;
  }
};

#endif