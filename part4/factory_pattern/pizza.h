#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
using namespace std;


class Pizza {
public:
  string description;
  
  virtual ~Pizza() {}

  void prepare() { cout << description + "토핑 + 반죽 만들기" << endl; }
  void bake() { cout << description + "굽기" << endl; }
  void cut() { cout << description + "자르기" << endl; }
  void box() { cout << description + "포장하기" << endl; }
};

class CheesePizza : public Pizza {
public:
  CheesePizza();
};
class GreekPizza : public Pizza {
public:
  GreekPizza();
};
class PepperoniPizza : public Pizza {
public:
  PepperoniPizza();
};
class NewYorkPizza : public Pizza {
public:
  NewYorkPizza();
};
class ChicagoPizza : public Pizza {
public:
  ChicagoPizza();
};
class CaliforniaPizza : public Pizza {
public:
  CaliforniaPizza();
};

#endif