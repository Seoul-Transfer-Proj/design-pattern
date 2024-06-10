#ifndef DUCK_H
#define DUCK_H

#include "goose.h"
#include "duck_factory.h"
#include "goose_factory.h"
#include <iostream>
using namespace std;

class Quackable {
public:
  virtual void quack() = 0;
  virtual ~Quackable() {}
};

class MallarDuck : public Quackable {
public:
  void quack() {
    cout << "Quack!!" << endl;
  }
};

class RedHeadDuck : public Quackable {
public:
  void quack() {
    cout << "꾸엑" << endl;
  }
};

class DuckCall : public Quackable {
public:
  void quack() {
    cout << "꽉꽉" << endl;
  }
};

class RubberDuck : public Quackable {
public:
  void quack () {
    cout << "삑삑" << endl;
  }
};

class GooseAdapter : public Quackable, GooseFactory {
private:
  Goose* goose;
public:
  Goose* createGoose() {
    return new Goose();
  }
  void quack() {
    cout << "오리의 탈을 쓴 거위" << endl;
    goose->honk();
  }
};

class QuackCountDecorator : public Quackable {
private:
  Quackable* duck;

public:
  static int quackCount;
  QuackCountDecorator(Quackable* duck) { this->duck = duck; }
  void quack() {
    duck->quack();
    quackCount ++;
  }

  static int getQuackCount() { return quackCount; }
};

class DuckSimulator {
public:
  void simulate() {
    AbstractDuckFactory* duckFactory = new CountingDuckFactory();

    Quackable* mallarDuck = duckFactory->createMallarDuck();
    Quackable* redHeadDuck = duckFactory->createRedHeadDuck();
    Quackable* duckCall = duckFactory->createDuckCall();
    Quackable* rubberDuck =duckFactory->createRubberDuck();
    Quackable* goose = new GooseAdapter();

    simulate(mallarDuck);
    simulate(redHeadDuck);
    simulate(duckCall);
    simulate(rubberDuck);
    simulate(goose);

    cout << "꽥 횟수: " << QuackCountDecorator::getQuackCount() << endl;

    delete mallarDuck;
    delete redHeadDuck;
    delete duckCall;
    delete rubberDuck;
  }

  void simulate(Quackable* duck) {
    duck->quack();
  }
};

#endif