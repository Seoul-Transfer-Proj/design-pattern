#ifndef CHICAGOSTORE_H
#define CHICAGOSTORE_H

#include "pizza_store.h"
#include "../pizza/chicago/chicago.h"

class ChicagoStore : public PizzaStore {
public:
  ChicagoStore(IngredientFactory* ingredientFactory) : PizzaStore(ingredientFactory) {}

  Pizza* createPizza(string type) {
    Pizza* pizza;
    if (type == "cheese") {
      pizza = new ChicagoStyleCheesePizza();
    } 
    else if (type == "pepperoni") 
    {
      pizza = new ChicagoStylePepperoniPizza();
    }
    else 
    {
      pizza = new ChicagoStyleVeggiePizza();
    }
  return pizza;
  }
};

#endif