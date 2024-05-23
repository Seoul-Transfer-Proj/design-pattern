#include <iostream>
using namespace std;

class FlyBehavior {
    public:
      virtual void fly() = 0;
      virtual ~FlyBehavior() {}
};

class FlyNoWay : public FlyBehavior {
    public:
      void fly() override {
        cout << "날 수 없는 덕.." << endl;
      }
};


class FlyWithWings : public FlyBehavior {
  public:
    void fly() override {
        cout << "Duck is Flying!!!" << endl;
    }
};

class FlyRocketPowered : public FlyBehavior {
public:
  void fly() {
    cout << "I'm flying with a rocket!" << endl;
  }
};