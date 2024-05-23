#include <iostream>
#include "weapon.h"
using namespace std;

class AxeBehavior : public WeaponBehavior {
public:
  void useWeapon() override {
    cout << "도끼 사용" << endl;
  }
};
