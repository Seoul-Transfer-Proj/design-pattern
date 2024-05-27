#include "pizza.h"
#include <iostream>
using namespace std;



Pizza Pizza::orderPizza (string type) {
  Pizza pizza;
  
  // type을 문자열로 받아서 그에 맞는 객체를 pizza 변수에 할당
  // 만약에 이외의 피자가 추가된다면?
  // ~
  if (type == "cheese") {
    pizza = CheesePizza();
  } else if (type == "greek")
  {
    pizza = GreekPizza();
  } else if (type == "pepperoni")
  {
    pizza = PepperoniPizza();
  }
  // 여기 부분을 하드 코딩해서 계속 바꿔줘야하는 단점이 있음. 

  pizza.prepare();
  pizza.bake();
  pizza.cut();
  pizza.box();

  return pizza;
}