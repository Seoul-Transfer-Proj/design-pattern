#ifndef LIVINGROOMFAN_H
#define LIVINGROOMFAN_H

#include <iostream>
using namespace std;

class LivingRoomFan {
public:
  void on() { cout << "거실의 선풍기가 켜졌어요" << endl; }
  void off() { cout << "거실의 선풍기가 꺼졌어요" << endl; }
};

#endif