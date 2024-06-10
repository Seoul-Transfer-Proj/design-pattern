#ifndef NOQUARTER_H
#define NOQUARTER_H

#include "../state_machine/gumball_state_machine.h"
#include "state.h"


class NoQuarter : public State {
private:
  GumballStateMachine gumballStateMachine;
public:
  NoQuarter(GumballStateMachine gumballStateMachine) { this->gumballStateMachine = gumballStateMachine; }
  void insertQuarter(){
    gumballStateMachine.setState(gumballStateMachine.hasQuarterState);
    cout << "동전이 삽입됐어요." << endl;
  };
  void turnsCrank() { cout << "동전이 없어요. 동전을 삽입해주세요." << endl; }
  void ejectsQuarter() { cout << "동전이 없어요. 동전을 삽입해주세요." << endl; }
  void dispenseGumball() { cout << "동전이 없어요. 동전을 삽입해주세요." << endl; }
};

#endif 