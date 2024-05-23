#include <iostream>

#ifndef character_h
#define character_h
#include "../weapon/weapon.h"


class Character {
protected:
  WeaponBehavior* weapon;
public:
  virtual ~Character() {}
  void setWeapon(WeaponBehavior* w) {weapon = w;};
  virtual void fight(){ weapon->useWeapon();};
};

#endif