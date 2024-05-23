#include <iostream>

using namespace std;

class QuackBehavior {
  public:
    virtual void quack() = 0;
    virtual ~QuackBehavior() {}
};

class Quack : public QuackBehavior {
  public:
    void quack() override {
        cout << "꽥" << endl;
    }
};

class Squeak : public QuackBehavior{
  public:
    void quack() override {
        cout << "삑삑" << endl;
    }
};


class MuteQuack : public QuackBehavior{
  public:
    void quack() override {
        cout << "" << endl;
    }
};
