#ifndef DARKROAST_H
#define DARKROAST_H

#include "beverage.h"
#include <iostream>
using namespace std;

class DarkRoast : public Beverage {

public:
  DarkRoast() { description = "최고의 다크 로스트 커피"; }

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