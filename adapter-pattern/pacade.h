#ifndef PACADE_H
#define PACADE_H

#include "duck.h"
#include "turkey.h"

class Pacade {
private:
  Duck* duck;
  Turkey* turkey;
public:
  Pacade(Duck* duck, Turkey* turkey) {
    this->duck = duck;
    this->turkey = turkey;
  }
  void quack() {
    duck->quack();
    turkey->gobble();
  }
  void fly() {
    duck->fly();
    turkey->fly();
  }

};

#endif 