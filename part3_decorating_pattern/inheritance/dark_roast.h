#ifndef DARKROAST_H
#define DARKROAST_H

#include "beverage.h"

class DarkRoast : public Beverage {

public:
  DarkRoast() { description = "최고의 다크 로스트 커피"; }
  ~DarkRoast() {}
  double cost () override {
    // 다크 로스트 음료의 가격과 super의 cost()를 호출해 첨가물의 가격을 더한 값을 반환
    return 100;
  }
};

#endif