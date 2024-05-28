#ifndef DOUGH_H
#define DOUGH_H

#include "ingredient.h"

class Dough : public Ingredient {};

class ThickCrustDough : public Dough {
public:
  ThickCrustDough() { cout << "ThickCrustDough" << endl; }
};
class VeryThinCrust : public Dough {
public:
  VeryThinCrust() { cout << "VeryThinCrust" << endl; }
};
class ThinCrustDough : public Dough {
public:
  ThinCrustDough() { cout << "ThinCrustDough" << endl; }
};

#endif