#ifndef CAFFEINBEVERAGE_H
#define CAFFEINBEVERAGE_H

#include <iostream>
using namespace std;

class CaffeinBeverage {
public:
  void prepareRecipe() {
    boilWater();
    brew();
    pourInCup();
    if (customerWantsCondiments()) {
      addCondiments();
    }
  }
  void boilWater() { cout << "물 끓이는 중.." << endl; }
  virtual void brew() = 0;
  void pourInCup() { cout << "컵에 커피 내리는 중.." << endl; }
  virtual void addCondiments() = 0;

  virtual bool customerWantsCondiments() { return true; }
};

#endif 