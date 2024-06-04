#include "money_machine.h"

int main() {
  GumballStateMachine gumballStateMachine = GumballStateMachine();
  string input;
  while (gumballStateMachine.getNumberOfGumball() > 0)
  {
    bool isInserted = false;
  // 동전을 넣으시겠습니까? > Y가 될 때까지 반복
    while (!isInserted)
    {
      cout << "동전을 넣으시겠습니까?(Y/N)" << endl;
      cin >> input;
      isInserted = isTrue(input);
    }
  // Y라면 GumballStateMachine state의 state를 HAS_QUARTER 상태로 변경
    gumballStateMachine.insertQuarter(isInserted);

    cout << "손잡이를 돌리시겠습니까?(Y/N)" << endl;
    cin >> input;
    isInserted = isTrue(input);
  // Y라면 
    if (isInserted) {
      gumballStateMachine.turnsCrank();
      // gumball > 0 이라면 NO_QUARTER 상태로 변경
      // gumball = 0 이라면 OUT_OF_GUMBALL 상태로 변경
      gumballStateMachine.dispenseGumball();
    } else {
    // N이라면 동전을 다시 제거
    // NO_QUARTER 상태로 변경
      gumballStateMachine.ejectsQuarter();
    }
  }
};