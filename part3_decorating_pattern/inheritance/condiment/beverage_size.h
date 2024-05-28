#ifndef BEVERAGESIZE_H
#define BEVERAGESIZE_H

#include "condiment_decorator.h"
#include "../const/size.h"

class BeverageSize : public CondimentDecorator {
private:
  Beverage* beverage;
public:
  BeverageSize(Beverage* beverage) { this->beverage = beverage; }
  string getDescription() override { 
    return getStringFromSize( beverage->getSize()) + "사이즈 " +beverage->getDescription(); 
    }
  double cost() override ;
};


#endif