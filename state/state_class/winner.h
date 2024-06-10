#ifndef WINNER_H
#define WINNER_H

#include "../state_machine/gumball_state_machine.h"
#include "state.h"


class Winner : public State {
private:
  GumballStateMachine gumballStateMachine;
public:
  Winner(GumballStateMachine gumballStateMachine) { this->gumballStateMachine = gumballStateMachine; }
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