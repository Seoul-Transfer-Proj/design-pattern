#ifndef INGREDIENTFACTORY_H
#define INGREDIENTFACTORY_H

#include "../ingredient/dough.h"
#include "../ingredient/cheese.h"
#include "../ingredient/clam.h"
#include "../ingredient/sauce.h"


class IngredientFactory {
public:
  virtual ~IngredientFactory() {}
  virtual Dough createDough() = 0;
  virtual Cheese createCheese() = 0;
  virtual Clam createClam() = 0;
  virtual Sauce createSauce() = 0;
};

#endif