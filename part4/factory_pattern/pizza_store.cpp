#include "pizza_store.h"

Pizza* PizzaStore::orderPizza() {
  Pizza* pizza = factory->createPizza();

  pizza->prepare();
  pizza->bake();
  pizza->cut();
  pizza->box();

  return pizza; 
}

void PizzaStore::setPizzaFactory(PizzaFactory* pizzaFactory) {
  if (factory != pizzaFactory) {
    delete factory;
    this->factory = pizzaFactory;
  }
}