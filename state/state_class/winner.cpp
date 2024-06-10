#include "winner.h"

void Winner::dispenseGumball() {
    if (gumballStateMachine.getNumberOfGumball() > 0) {
      gumballStateMachine.setState(gumballStateMachine.noQuarterState);
      cout << "동전 삽입 대기 상태." << endl;
    } else if (gumballStateMachine.getNumberOfGumball() == 0) {
      gumballStateMachine.setState(gumballStateMachine.soldOutState);
      cout << "GUMBALL의 수량이 0개예요." << endl;
    }
  }