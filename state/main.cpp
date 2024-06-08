#include "./state_machine/gumball_state_machine.h"

bool isTrue(string input) {
  return input == "Y";
}

int main() {
  GumballStateMachine gumballStateMachine = GumballStateMachine(10, "Seoul");
  State* noQuarterState = new NoQuarter(gumballStateMachine);
  State* hasQuarterState = new HasQuarter(gumballStateMachine);
  State* soldState = new Sold(gumballStateMachine);
  State* soldOutState = new SoldOut(gumballStateMachine);
  State* winnerState = new Winner(gumballStateMachine);
  gumballStateMachine.setInitializeMemberState(noQuarterState, hasQuarterState, soldState, soldOutState, winnerState);

  string input;
  while (gumballStateMachine.getNumberOfGumball() > 0)
  {
    bool isInserted = false;
  // 동전을 넣으시겠습니까? > Y가 될 때까지 반복
    while (!isInserted)
    {
      std::cout << "동전을 넣으시겠습니까?(Y/N)" << endl;
      cin >> input;
      isInserted = isTrue(input);
    }
    gumballStateMachine.insertQuarter();
  // 손잡이를 돌렸는가?
    bool isTurned = false;
    cout << "손잡이를 돌리시겠습니까?(Y/N): " << endl;
    cin >> input;
    isTurned = isTrue(input);

    if (isTurned == true) {
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