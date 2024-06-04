#include <iostream>
using namespace std;

class GumballStateMachine {
private:
  int state = NO_QUARTER;
  int numberOfGumball = 10;

public:
  const static int NO_QUARTER = 0;
  const static int HAS_QUARTER = 1;
  const static int GUMBALL_SOLD = 2;
  const static int OUT_OF_GUMBALLS = 3;
  
  // 동전이 없는 상황
  // 동전을 넣는다면 '동전 있음' 상태로 변경
  void insertQuarter(bool isInserted) {
    if (isInserted) {
      state = HAS_QUARTER;
      cout << "동전이 삽입됐어요." << endl;
    }
  }
    
  // '동전 있음'
  // 1. 손잡이를 돌린다.
  // 'GUMBALL_SOLD' 상태로 변경
  void turnsCrank() {
    state = GUMBALL_SOLD;
    numberOfGumball -= 1;
    cout << "GumBall이 나왔어요." << endl;
  }

  // 2. 동전을 제거한다. 
  // 'No_Quater' 상태로 변경
  void ejectsQuarter() {
    state = NO_QUARTER;
    cout << "동전을 제거했어요." << endl;
  }

  // GUMBALL_SOLD
  // 1. GUMBALL > 0 이면 NO_QUARTER로 변경.
  // 2. GUMBALL == 0 이면 OUT_OF_GUMBALLS로 변경.
  void dispenseGumball() {
  if (numberOfGumball > 0) {
      state = NO_QUARTER;
      cout << "동전 삽입 대기 상태." << endl;
  } else if (numberOfGumball == 0) {
      state = OUT_OF_GUMBALLS;
      cout << "GumBall 수량 0." << endl;
    }
  }
  int getState() { return state; }
  int getNumberOfGumball() { 
    cout << "GumBall의 개수: " << numberOfGumball << "개" << endl;
    return numberOfGumball;
  }
};

bool isTrue(string input) {
  if (input == "Y") {
    return true;
  } else {
    return false;
  }
}