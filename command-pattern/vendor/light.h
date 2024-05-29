#ifndef LIGHT_H
#define LIGHT_H

#include <iostream>
using namespace std;

class Light {
public:
  bool isLight;

  Light() { isLight = false; }
  virtual void on() = 0;
  virtual void off() = 0;
};

#endif 