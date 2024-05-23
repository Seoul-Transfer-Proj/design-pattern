#include "weapon.h"
#include <iostream>
using namespace std;

#ifndef knife_h
#define knife_h

class KnifeBehavior : public WeaponBehavior {
public:
  void useWeapon() override {cout<< "cutting using knife" << endl;};
};

#endif