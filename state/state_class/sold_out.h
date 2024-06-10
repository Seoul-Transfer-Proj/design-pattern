#ifndef SOLDOUT_H
#define SOLDOUT_H

#include "../state_machine/gumball_state_machine.h"
#include "state.h"

class SoldOut : public State {
private:
  GumballStateMachine gumballStateMachine;
public:
  SoldOut(GumballStateMachine gumballStateMachine) { this->gumballStateMachine = gumballStateMachine; };
  void insertQuarter() {
    cout << "GUMBALL이 없어요. 조금 후에 다시 시도해주세요"  << endl;
  }
  void turnsCrank() {
    cout << "GUMBALL이 없어요. 조금 후에 다시 시도해주세요"  << endl;
  }
  void ejectsQuarter() {
    cout << "GUMBALL이 없어요. 조금 후에 다시 시도해주세요"  << endl;
  }
  void dispenseGumball() {
    cout << "GUMBALL이 없어요. 조금 후에 다시 시도해주세요"  << endl;
  }
};

#endif 