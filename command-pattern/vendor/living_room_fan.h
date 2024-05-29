#ifndef LIVINGROOMFAN_H
#define LIVINGROOMFAN_H

#include <iostream>
using namespace std;

class LivingRoomFan {
public:
  static const int HIGH = 3;
  static const int MEDIUM = 2;
  static const int LOW = 1;
  static const int OFF = 0;
  string location;
  int speed;

  LivingRoomFan() { speed = OFF; }

  void on() { 
    speed = LOW;
    cout << "거실의 선풍기가 켜졌어요" << endl;
  }
  void off() { 
    speed = OFF;
    cout << "거실의 선풍기가 꺼졌어요" << endl;
  }
  
  void high() { 
    speed = HIGH; 
    cout << "거실의 선풍기가 3단이예요" << endl;
  }
  void medium() { 
    speed = MEDIUM; 
    cout << "거실의 선풍기가 2단이예요" << endl;
  }
  void low() { 
    speed = LOW; 
    cout << "거실의 선풍기가 1단이예요" << endl;
  }

  int getSpeed() {
    return speed;
  }
};

#endif