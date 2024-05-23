#include <iostream>
#include "./character/king.h"
#include "./weapon/bow_and_arrow.h"
#include "./character/character.h"

int main () {
  Character* king = new King();
  (*king).fight();
  (*king).setWeapon(new BowAndArrowBehavior());
  (*king).fight();
  return 0;
};