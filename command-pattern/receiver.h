#ifndef RECEIVER_H
#define RECEIVER_H

#include <iostream>
using namespace std;

class Receiver{
public:
  virtual void action() = 0;
};

class Bulb : public Receiver {
private:
  bool light;
public:
  Bulb() { 
    light = false;
    cout << "전구: 전구가 꺼진 상태예요" << endl;
  }
  void action() {
    if (light == false) {
      lightOn();
      cout << "전구: 전구가 켜졌어요" << endl;
    } else {
      lightOff();
      cout << "전구: 전구가 꺼졌어요" << endl;
    }
  }
  void lightOn() { light = true; }
  void lightOff() { light = false; }
};

#endif