#include <iostream>
#include "flybehavior.h"
#include "quackbehavior.h"

using namespace std;

class Duck {
  protected:
    FlyBehavior* flyBehavior;
    QuackBehavior* quackBehavior;
  public:
    void swim () {
      cout << "Duck is Swimming!!" << endl;
    }
    virtual void display () = 0;
    virtual void performFly() {
      flyBehavior->fly();
    }
    virtual void performQuack() {
      quackBehavior->quack();
    }
    void setFlyBehavior(FlyBehavior* fb) {
      flyBehavior = fb;
    }
    void setQuackBehavior(QuackBehavior* qb) {
      quackBehavior = qb;
    }
    virtual ~Duck() {
      delete flyBehavior;
      delete quackBehavior;
    }
};

class MallardDuck : public Duck {
public:
  MallardDuck() {
    flyBehavior = new FlyWithWings();
    quackBehavior = new Quack();
  }
  void display () override {
    cout << "MallardDuck !!!" << endl;
  }
};

class DecoyDuck : public Duck {
public:
  DecoyDuck() {
    flyBehavior = new FlyNoWay();
    quackBehavior = new MuteQuack();
  }
  void display() override {
    cout << "Looks like DecoyDuck!!" << endl;
  }
};

