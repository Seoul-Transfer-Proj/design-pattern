#include <iostream>
#include "character.h"
#include "../weapon/knife.h"

class Knight : public Character {
public:
  Knight() {
    weapon = new KnifeBehavior();
  }
  void fight () {
    (*weapon).useWeapon();
  }
};
