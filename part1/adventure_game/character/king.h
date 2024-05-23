#include "character.h"
#include "../weapon/knife.h"

#ifndef KING_H
#define KING_H

class King : public Character {
public:
  King() {
    weapon = new KnifeBehavior();
  }
  void fight() override {
    (*weapon).useWeapon();
  }
  virtual ~King() {}
};

#endif