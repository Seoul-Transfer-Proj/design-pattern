#include "gumball_state_machine.h"

class HasQuarter;
class NoQuarter;
class Sold;
class SoldOut;
class Winner;

GumballStateMachine::GumballStateMachine(int count) {
  noQuarterState = new NoQuarter(this);
  hasQuarterState = new HasQuarter(this);
  soldState = new Sold(this);
  soldOutState = new SoldOut(this);
  winnerState = new Winner(this);

  numberOfGumball = count;
  if (count > 0) {
    state = noQuarterState;
  } else {
    state = soldOutState;
  }
}

void GumballStateMachine::insertQuarter() {
  state->insertQuarter();
}

void GumballStateMachine::turnsCrank() {
  state->turnsCrank();
  if (state == noQuarterState) {
    cout << "동전을 먼저 삽입해주세요." << endl;
  } else {
    this->dispenseGumball();
  }
}

void GumballStateMachine::ejectsQuarter() {
  state->ejectsQuarter();
}

void GumballStateMachine::dispenseGumball() {
  state->dispenseGumball();
}

State* GumballStateMachine::getState() { return state; }
int GumballStateMachine::getReservedGumball() { return this->reservedGumball; }
int GumballStateMachine::getTurnedCrankCount() { return this->turnedCrankCount; }
int GumballStateMachine::getNumberOfGumball() {
  cout << "GumBall의 개수: " << numberOfGumball << "개" << endl;
  return numberOfGumball;
}

void GumballStateMachine::setReservedGumball(int reservedGumball) { this->reservedGumball = reservedGumball; }
void GumballStateMachine::setState(State* state) { this->state = state; }
void GumballStateMachine::setTurnedCrank(int i) { turnedCrankCount = i; }
void GumballStateMachine::setNumberOfGumBall(int gumball) { numberOfGumball = gumball; }
