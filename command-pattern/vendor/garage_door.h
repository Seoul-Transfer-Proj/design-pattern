#ifndef GARAGEDOOR_H
#define GARAGEDOOR_H

#include <iostream>
using namespace std;

class GarageDoor {
public:
  void up() { cout << "차고 문이 열렸어요" << endl; }
  void down() { cout << "차고 문이 닫혔어요" << endl; }
  void stop() { cout << "차고 문 작동이 중단됐어요" << endl; }
  void lightOn() { cout << "차고 문의 불이 켜졌어요" << endl; }
  void lightOff() { cout << "차고 문의 불이 꺼졌어요" << endl; }
};

#endif