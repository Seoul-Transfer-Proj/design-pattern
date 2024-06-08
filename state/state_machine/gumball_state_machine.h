#ifndef GUMBALL_STATE_MACHINE_H
#define GUMBALL_STATE_MACHINE_H

#include "../state_class/state.h"
#include "../state_class/has_quarter.h"
#include "../state_class/no_quarter.h"
#include "../state_class/sold.h"
#include "../state_class/sold_out.h"
#include "../state_class/winner.h"

#include <iostream>
using namespace std;

class GumballStateMachine {
private:
  State* state;
  int numberOfGumball;
  int turnedCrankCount;
  int reservedGumball = 0;
  string location;

public:
  State* noQuarterState;
  State* hasQuarterState;
  State* soldState;
  State* soldOutState;
  State* winnerState;
  
  GumballStateMachine() {}
  GumballStateMachine(int count, string location) {
    turnedCrankCount = count;
    this->location = location;
  }
  void insertQuarter();
  void turnsCrank();
  void ejectsQuarter();
  void dispenseGumball();

  State* getState();
  int getReservedGumball();
  int getTurnedCrankCount();
  int getNumberOfGumball();
  string getLocation() { return this->location; }

  void setInitializeMemberState(State* noQuarterState, State* hasQuarterState, State* soldState, State* soldOutState, State* winnerState);
  void setReservedGumball(int reservedGumball);
  void setState(State* state);
  void setTurnedCrank(int i);
  void setNumberOfGumBall(int gumball);
};

#endif
