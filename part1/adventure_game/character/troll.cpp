#include <iostream>
#include "character.h"
#include "../weapon/axe.cpp"

class Troll : public Character {
public:
  Troll() {
    weapon = new AxeBehavior();
  }
  void fight () {
    (*weapon).useWeapon();
  }
};
