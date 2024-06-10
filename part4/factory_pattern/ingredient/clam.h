#ifndef CLAM_H
#define CLAM_H

#include "ingredient.h"

class Clam : public Ingredient {};

class FreshClam : public Clam {
public:
  FreshClam() { cout << "FreshClam" << endl; }
};
class FrozenClam : public Clam {
public:
  FrozenClam() { cout << "FrozenClam" << endl; }
};
class Calamari : public Clam {
public:
  Calamari() { cout << "Calamari" << endl; }
};

#endif