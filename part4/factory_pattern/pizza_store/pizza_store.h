#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "../pizza/pizza.h"
#include "../ingredient_factory/factory.h"

class PizzaStore {
protected:
  IngredientFactory* ingredientFactory;
public:
  PizzaStore(IngredientFactory* ingredientFactory) {
    this->ingredientFactory = ingredientFactory;
  }
  virtual ~PizzaStore() {
    delete ingredientFactory;
  }

  // void setPizzaFactory(PizzaFactory* pizzaFactory);

  Pizza* orderPizza(string type);
  virtual Pizza* createPizza(string type) = 0;
};

#endif