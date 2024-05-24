#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <iostream>
using namespace std;

class Beverage {
protected:
  string description;
  bool milk;
  bool soy;
  bool mocha;
  bool whip;
public:
  string getDescription() { return description; }
  double cost() {
  // milk가 true면 500원을 더한다.
  // soy가 true면 300원을 더한다.
  // mocha가 true면 200원을 더한다.
  // whip이 true면 500원을 더한다. 
  }

  bool hasMilk() { return milk; }
  bool setMilk(bool isMilk) { milk = isMilk; }

  bool hasSoy() { return soy; }
  bool setSoy(bool isSoy) { milk = isSoy; }

  bool hasMocha() { return mocha; }
  bool setMocha(bool isMocha) { mocha = isMocha; }

  bool hasWhip() { return whip; }
  bool setWhip(bool isWhip) { whip = isWhip; }
};

#endif