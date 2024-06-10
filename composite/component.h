#ifndef COMPONENT_H
#define COMPONENT_H

#include <stdexcept>
#include <iostream>
using namespace std;

class MenuComponent {
public:
  virtual string getName() = 0;
  virtual string getDescription() = 0;

  // MenuItem과 Menu에서 필요한 메서드만 상속해서 사용하기 위한 장치
  // 함수 body가 빈 값이면 { } 컴파일 에러 발생.
  virtual double getPrice() {
    throw logic_error("getPrice()는 이 객체에서 사용할 수 없습니다.");
  };
  virtual bool isVegetarian() {
    throw logic_error("isVegetarian()는 이 객체에서 사용할 수 없습니다.");
  };
  virtual void print() {
    throw logic_error("print()는 이 객체에서 사용할 수 없습니다.");
  }
  virtual void add(MenuComponent* menuComponent) {
    throw logic_error("add()는 이 객체에서 사용할 수 없습니다.");
  }
  virtual void remove(MenuComponent* menuComponent) {
    throw logic_error("remove()는 이 객체에서 사용할 수 없습니다.");
  }
  virtual MenuComponent* getChild(int position) {
    throw logic_error("getChild()는 이 객체에서 사용할 수 없습니다.");
  }
};

#endif