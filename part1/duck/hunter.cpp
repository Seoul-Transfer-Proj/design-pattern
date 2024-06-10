#include "quackbehavior.cpp"
#include <iostream>
using namespace std;

class DuckSimulator {
protected:
  QuackBehavior* quackBehavior = new Quack();
public:
  void performQuack() {
    (*quackBehavior).quack();
  }
};

int main() {
  DuckSimulator duckSimulator = DuckSimulator();
  duckSimulator.performQuack();
}