#ifndef CHICAGOPIZZA_H
#define CHICAGOPIZZA_H

#include "../pizza.h"

class ChicagoPizza : public Pizza {};

class ChicagoStyleCheesePizza : public ChicagoPizza {
public:
  ChicagoStyleCheesePizza();
};
class ChicagoStyleVeggiePizza : public ChicagoPizza {
public:
  ChicagoStyleVeggiePizza();
};
class ChicagoStylePepperoniPizza : public ChicagoPizza {
public:
  ChicagoStylePepperoniPizza();
};

#endif