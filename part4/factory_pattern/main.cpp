#include "pizza_store.h"
#include "./pizza_factory/cheese.h"
#include "./pizza_factory/chicago.h"
#include "./pizza_factory/newyork.h"

#include <iostream>
using namespace std;

int main() {
  // 치즈 피자 주문하기
  PizzaFactory* pizzaFactory = new CheesePizzaFactory();
  PizzaStore* pizzaStore = new PizzaStore(pizzaFactory);
  pizzaStore->orderPizza();

  // 시카고 피자 주문
  pizzaStore->setPizzaFactory(new ChicagoPizzaFactory());
  pizzaStore->orderPizza();

  // 뉴욕 피자 주문
  pizzaStore->setPizzaFactory(new NewYorkPizzaFactory());
  pizzaStore->orderPizza();
  delete pizzaStore;

  return 0;
};