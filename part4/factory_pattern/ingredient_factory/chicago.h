#ifndef CHICAGOINGREDIENTFACTRORY_H
#define CHICAGOINGREDIENTFACTRORY_H

#include "factory.h"

class ChicagoIngredientFactory : public IngredientFactory {
public:
  Dough createDough() { return ThickCrustDough(); }
  Cheese createCheese() { return MozzarellaCheese(); }
  Clam createClam() { return FrozenClam(); }
  Sauce createSauce() { return PlumTomatoSauce(); }
};

#endif