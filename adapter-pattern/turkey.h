#ifndef TURKEY_H
#define TURKEY_H

#include "duck.h"

class Turkey {
public:
  virtual void gobble() = 0;
  virtual void fly() = 0;
};

class WildTurkey : public Turkey {
public:
  void gobble() { cout << "골골" << endl; }
  void fly() { cout << "짧게만 날 수 있는 야생 칠면조" << endl; }
};

#endif