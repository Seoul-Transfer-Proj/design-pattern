#ifndef STATE_H
#define STATE_H

#include <iostream>
using namespace std;

class State {
public:
  virtual void insertQuarter() = 0;
  virtual void turnsCrank() = 0;
  virtual void ejectsQuarter() = 0;
  virtual void dispenseGumball() = 0;
};

#endif