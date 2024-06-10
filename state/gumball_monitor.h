#ifndef GUMBALL_MONITOR
#define GUMBALL_MONITOR

#include "state_machine/gumball_state_machine.h"

class GumballMonitor {
private:
  GumballStateMachine gumballStateMachine;
public:
  GumballMonitor(GumballStateMachine gumballStateMachine) { this->gumballStateMachine = gumballStateMachine; }
  void report() {
    cout << gumballStateMachine.getLocation() << endl;
    cout << gumballStateMachine.getNumberOfGumball() << endl;
    cout << gumballStateMachine.getState() << endl;
  }
};

#endif