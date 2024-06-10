#include "pizza_store.h"

Pizza* PizzaStore::orderPizza(string type) {
  Pizza* pizza = createPizza(type);
  
  pizza->prepare(ingredientFactory);
  pizza->bake();
  pizza->cut();
  pizza->box();

  return pizza; 
}

// void PizzaStore::setPizzaFactory(PizzaFactory* pizzaFactory) {
//   if (factory != pizzaFactory) {
//     delete factory;
//     this->factory = pizzaFactory;
//   }
// }