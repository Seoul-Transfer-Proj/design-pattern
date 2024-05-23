#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
public:
  virtual void update(int temp, int humidity, int pressure) = 0; 
};

class Displayment {
public:
  virtual void display() = 0;
};

#endif