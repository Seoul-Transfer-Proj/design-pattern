#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
using namespace std;


class Pizza {
public:
// 피자 타입에 맞는 객체를 생성하는 메서드
  Pizza orderPizza (string type);
  
  void prepare() { cout << "토핑 + 반죽 만들기" << endl; }
  void bake() { cout << "굽기" << endl; }
  void cut() { cout << "자르기" << endl; }
  void box() { cout << "포장하기" << endl; }
};

class CheesePizza : public Pizza {};
class GreekPizza : public Pizza {};
class PepperoniPizza : public Pizza {};

#endif