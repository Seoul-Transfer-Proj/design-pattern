#ifndef SOLD_H
#define SOLD_H

#include "../state_machine/gumball_state_machine.h"
#include "state.h"

class Sold : public State {
private:
  GumballStateMachine gumballStateMachine;
public:
  Sold(GumballStateMachine gumballStateMachine)  { this->gumballStateMachine = gumballStateMachine; }
  void insertQuarter() {
    cout << "GUMBALL이 나가고 있어요. 조금만 기다려주세요." << endl;
  }
  void turnsCrank() {
    cout << "GUMBALL이 나가고 있어요. 조금만 기다려주세요." << endl;
  }
  void ejectsQuarter() {
    cout << "GUMBALL이 나가고 있어요. 조금만 기다려주세요." << endl;
  }
  void dispenseGumball();
};

#endif 