#include "weapon.h"
#include <iostream>
using namespace std;

class SwordBehavior : public WeaponBehavior {
public:
  void useWeapon() override {
    cout<< "SwordBehavior" << endl;
  }
};
