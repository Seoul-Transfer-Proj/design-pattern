#ifndef NEWYORKSTORE_H
#define NEWYORKSTORE_H

#include "pizza_store.h"
#include "../pizza/newyork/newyork.h"
#include "../ingredient_factory/newyork.h"

class NewYorkStore : public PizzaStore {
public:
  NewYorkStore(IngredientFactory* ingredientFactory) : PizzaStore(ingredientFactory) {}
  Pizza* createPizza(string type) {
    Pizza* pizza;
    if (type == "cheese") {
      pizza = new NyStyleCheesePizza();
    } 
    else if (type == "pepperoni") 
    {
      pizza = new NyStylePepperoniPizza();
    }
    else 
    {
      pizza = new NyStyleVeggiePizza();
    }
  return pizza;
  }
};


#endif