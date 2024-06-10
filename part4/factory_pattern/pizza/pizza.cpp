#include "pizza.h"

void Pizza::prepare(IngredientFactory* ingredientFactory) {
  cout << "재료 준비" << endl;
  cheese = ingredientFactory->createCheese();
  clam = ingredientFactory->createClam();
  dough = ingredientFactory->createDough();
  sauce = ingredientFactory->createSauce();
}

CheesePizza::CheesePizza() { 
  description = "CheesePizza";
  cout << description + "선택" << endl; 
}

GreekPizza::GreekPizza() { 
  description = "GreekPizza";
  cout << description + "선택" << endl; 
}

PepperoniPizza::PepperoniPizza() { 
  description = "PepperoniPizza";
  cout << description + "선택" << endl; 
}


CaliforniaPizza::CaliforniaPizza() { 
  description = "CaliforniaPizza";
cout << description + "선택" << endl; 
}