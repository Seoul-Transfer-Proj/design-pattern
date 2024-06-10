#include <iostream>
using namespace std;

class Pet {
public:
  virtual void speak() { cout << "" << endl; }
};

class Dog : public Pet {
public:
  void speak() override { cout << "멍멍" << endl; }
};

int main () {
  Dog ralph;

  Pet* p1 = &ralph;
  Pet& p2 = ralph;
  Pet p3;

  // Late-binding
  p1->speak();
  p2.speak();

  // early-binding
  p3.speak();
  
  return 0;  
};