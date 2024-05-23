#include <iostream>
#include "character.h"
#include "../weapon/sword.cpp"

class Queen : public Character {
public:
  Queen() {
    weapon = new SwordBehavior();
  }
  void fight () {
    (*weapon).useWeapon();
  }
};
