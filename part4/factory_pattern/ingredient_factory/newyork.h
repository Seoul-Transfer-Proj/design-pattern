#ifndef NEWYORKINGREDIENTFACTRORY_H
#define NEWYORKINGREDIENTFACTRORY_H

#include "factory.h"

class NewyorkIngredientFactory : public IngredientFactory {
public:
  Dough createDough() { return ThinCrustDough(); }
  Cheese createCheese() { return ReggianoCheese(); }
  Clam createClam() { return FreshClam(); }
  Sauce createSauce() { return MarinaraSauce(); }
};

#endif