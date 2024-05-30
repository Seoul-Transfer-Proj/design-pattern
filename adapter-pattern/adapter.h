#ifndef ADAPTER_H
#define ADAPTER_H

#include "turkey.h"
#include "duck.h"

class TurkeyAdapter : public Turkey {
private:
  Duck* duck;
public:
  TurkeyAdapter(Duck* duck){ this->duck = duck; }
  void gobble(){ duck->quack(); }
  void fly(){ duck->fly(); }
};

class DuckAdapter : public Duck {
private:
  Turkey* turkey;
public:
  DuckAdapter(Turkey* turkey) { this->turkey = turkey; }
  void quack() {
    turkey->gobble();
  }
  void fly() {
    turkey->fly();
  }
};

#endif