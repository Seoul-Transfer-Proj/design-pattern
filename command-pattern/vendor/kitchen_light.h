#ifndef KITCHENLIGHT_H
#define KITCHENLIGHT_H

#include "light.h"

class KitchenLight : public Light {
public:
  void on() override { 
    isLight = true;
    cout << "거실의 불이 켜졌어요" << endl; }
  void off() override { 
    isLight = false;
    cout << "거실의 불이 꺼졌어요" << endl; }
};

#endif