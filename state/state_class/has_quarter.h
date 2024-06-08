#ifndef HASQUARTER_H
#define HASQUARTER_H

#include "../state_machine/gumball_state_machine.h"
#include "state.h"


class HasQuarter : public State {
private:
  GumballStateMachine gumballStateMachine;
public:
  HasQuarter(GumballStateMachine gumballStateMachine) { this->gumballStateMachine = gumballStateMachine; }
  void insertQuarter() {
    cout << "이미 동전이 들어있어요."  << endl;
    cout << "동전 반환 중"  << endl;
  }
  void turnsCrank();
  void ejectsQuarter();
  void dispenseGumball() {
      cout << "손잡이를 돌리겠습니까?" << endl;
  }
};

#endif 