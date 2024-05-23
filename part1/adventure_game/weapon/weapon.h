#ifndef weapon_h
#define weapon_h

class WeaponBehavior {
public:
  virtual ~WeaponBehavior() {}
  virtual void useWeapon() = 0;
};

#endif