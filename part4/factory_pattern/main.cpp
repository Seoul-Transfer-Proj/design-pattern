#include "./pizza_store/pizza_store.h"
#include "./pizza_store/newyork.h"

#include "./ingredient_factory/factory.h"
#include "./ingredient_factory/newyork.h"

#include <iostream>
using namespace std;

int main() {
  // 치즈 피자 주문하기
  IngredientFactory* nyIngredientFactory = new NewyorkIngredientFactory();
  PizzaStore* nyPizzaStore = new NewYorkStore(nyIngredientFactory);
  nyPizzaStore->orderPizza("cheese");

  // 시카고 피자 주문


  // 뉴욕 피자 주문


  return 0;
};