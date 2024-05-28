#ifndef CALIFORNIAINGREDIENTFACTRORY_H
#define CALIFORNIAINGREDIENTFACTRORY_H

#include "factory.h"

class CaliforniaIngredientFactory : public IngredientFactory {
public:
  Dough createDough() { return VeryThinCrust(); }
  Cheese createCheese() { return GoatCheese(); }
  Clam createClam() { return Calamari(); }
  Sauce createSauce() { return BruschettaSauce(); }
};

#endif