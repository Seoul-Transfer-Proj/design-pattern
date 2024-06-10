#ifndef ADAPTERDUCK_H
#define ADAPTERDUCK_H

#include <iostream>
using namespace std;
#include "turkey.h"

class Duck {
public:
  virtual void quack() = 0;
  virtual void fly() = 0;
};

class MallardDuck : public Duck {
public:
  void quack() {cout << "꽥꽥" << endl; }
  void fly() { cout << "오리가 날고 있어요!" << endl; }
};

#endif