#ifndef DUCK_FACTORY_H
#define DUCK_FACTORY_H

class Quackable;

class AbstractDuckFactory {
public:
  virtual Quackable* createMallarDuck() = 0;
  virtual Quackable* createRedHeadDuck() = 0;
  virtual Quackable* createDuckCall() = 0;
  virtual Quackable* createRubberDuck() = 0;
};

class CountingDuckFactory : public AbstractDuckFactory {
public:
  Quackable* createMallarDuck() override;
  Quackable* createRedHeadDuck() override;
  Quackable* createDuckCall() override;
  Quackable* createRubberDuck() override;
};

#endif
