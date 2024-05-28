#ifndef BEVERAGE_H
#define BEVERAGE_H

#include "../const/size.h"
#include <iostream>
using namespace std;


class Beverage {
protected:
  string description;
  Size size = Size::TALL;
  
public:
  virtual ~Beverage() {}
  virtual string getDescription() = 0;
  virtual double cost() = 0;

  void setSize (Size size) {
    this->size = size;
  }
  Size getSize () { return this->size; }
};

#endif