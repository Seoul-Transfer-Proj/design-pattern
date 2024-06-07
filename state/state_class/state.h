#ifndef STATE_H
#define STATE_H

class State {
public:
  virtual void insertQuarter() = 0;
  virtual void turnsCrank() = 0;
  virtual void ejectsQuarter() = 0;
  virtual void dispenseGumball() = 0;
};

#endif