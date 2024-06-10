#include "duck_factory.h"
#include "duck.h"  // 필요한 곳에서만 duck.h 포함

Quackable* CountingDuckFactory::createMallarDuck() {
  return new QuackCountDecorator(new MallarDuck());
}

Quackable* CountingDuckFactory::createRedHeadDuck() {
  return new QuackCountDecorator(new RedHeadDuck());
}

Quackable* CountingDuckFactory::createDuckCall() {
  return new QuackCountDecorator(new DuckCall());
}

Quackable* CountingDuckFactory::createRubberDuck() {
  return new QuackCountDecorator(new RubberDuck());
}
