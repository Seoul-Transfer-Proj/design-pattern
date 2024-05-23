#include "weapon.h"
#include <iostream>
using namespace std;

#ifndef BOWANDARROW_H
#define BOWANDARROW_H

class BowAndArrowBehavior : public WeaponBehavior {
public:
  void useWeapon() override {
    cout << "<-------------" << endl;
    }
};

#endif