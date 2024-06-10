#ifndef SAUCE_H
#define SAUCE_H

#include "ingredient.h"

class Sauce : public Ingredient {};

class MarinaraSauce : public Sauce {
public:
  MarinaraSauce() { cout << "MarinaraSauce" << endl; }
};
class PlumTomatoSauce : public Sauce {
public:
  PlumTomatoSauce() { cout << "PlumTomatoSauce" << endl; }
};
class BruschettaSauce : public Sauce {
public:
  BruschettaSauce() { cout << "BruschettaSauce" << endl; }
};

#endif