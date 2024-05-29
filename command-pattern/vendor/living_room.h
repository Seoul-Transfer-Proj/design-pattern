#ifndef LIVINGROOM_H
#define LIVINGROOM_H

#include "light.h"

class LivingRoomLight : public Light {
public:
  void on() override { 
    isLight = true;
    cout << "거실의 불이 켜졌어요" << endl; }
  void off() override { 
    isLight = false;
    cout << "거실의 불이 꺼졌어요" << endl; }
};

#endif