#include <iostream>
using namespace std;

class GumballStateMachine {
private:
  int state = OUT_OF_GUMBALLS;
  int numberOfGumball;
  int turnedCrankCount = 0;
  int reservedGumball = 0;

public:
  const static int NO_QUARTER = 0;
  const static int HAS_QUARTER = 1;
  const static int GUMBALL_SOLD = 2;
  const static int OUT_OF_GUMBALLS = 3;
  const static int GUMBALL_SOLD_TWICE = 4;

  GumballStateMachine(int count) { 
    numberOfGumball = count;
    if (count > 0) {
      state = NO_QUARTER;
    }
  }
  
  // 동전이 없는 상황
  // 동전을 넣는다면 '동전 있음' 상태로 변경
  void insertQuarter() {
    if (state == HAS_QUARTER) {
      cout << "이미 동전이 들어있어요."  << endl;
      cout << "동전 반환 중"  << endl;
    } else if (state == OUT_OF_GUMBALLS) {
      cout << "GUMBALL이 없어요. 조금 후에 다시 시도해주세요"  << endl;
    } else if (state == GUMBALL_SOLD) {
      cout << "GUMBALL이 나가고 있어요. 조금만 기다려주세요." << endl;
    } else {
      state = HAS_QUARTER;
      cout << "동전이 삽입됐어요." << endl;
    }
  }

  void turnsCrank() {
    if (state == NO_QUARTER) {
      cout << "동전이 없어요. 동전을 삽입해주세요." << endl;
    } else if (state == GUMBALL_SOLD || state == GUMBALL_SOLD_TWICE) {
      cout << "GUMBALL이 나가고 있어요. 잠시 후에 손잡이를 돌려주세요." << endl;
    } else if (state == OUT_OF_GUMBALLS) {
      cout << "GUMBALL의 수량이: " << numberOfGumball << "개예요." << endl;
    } else {
      cout << "GUMBALL 나가는 중.." << endl;
      turnedCrankCount += 1;
      // Case 2: 이벤트(공을 2개씩 지급하는 경우)
      if (turnedCrankCount%10 == 0) {
        // Case 2-2: 미지급(공이 1개 남은 경우)
        if (numberOfGumball == 1) {
          cout << "Gumball이 1개 밖에 남지 않았어요. 다음에 오실 때 1개 더 드릴게요." << endl;
          reservedGumball += 1;
          state = GUMBALL_SOLD;
          numberOfGumball -=1;
          cout << "GUMBALL이 나왔어요. GUMBALL을 가져가세요." << endl;
        } else {
        // Case 2-1: 정상 지급(공을 2개 지급하는 경우)
          state = GUMBALL_SOLD_TWICE;
          numberOfGumball -= 2;
          cout << "축하합니다! GUMBALL이 2개 나왔어요. GUMBALL을 가져가세요." << endl;
        }
      // Case 1: 정상 지급하는 경우
      } else {
        // Case 1-2: 비정상 지급(#Case2-2에서 못받은 공이 있는 경우)
        if (reservedGumball > 0) {
          cout << "저번에 못가져 가신 Gumball도 함께 드릴게요." << endl;
          reservedGumball -= 1;
          numberOfGumball -= 2;
          state = GUMBALL_SOLD;
          cout << "GUMBALL이 2개 나왔어요. GUMBALL을 가져가세요" << endl;
        }
        // Case 1-1: 정상 지급
        numberOfGumball -= 1;
        state = GUMBALL_SOLD;
        cout << "GUMBALL이 나왔어요. GUMBALL을 가져가세요." << endl;
      }
    }
  }

  // 2. 동전을 제거한다. 
  // 'No_Quater' 상태로 변경
  void ejectsQuarter() {
    if (state == NO_QUARTER) {
      cout << "동전이 없어요. 동전을 삽입해주세요." << endl;
    } else if (state == HAS_QUARTER) {
      cout << "동전 나가는 중" << endl;
      state = NO_QUARTER;
      cout << "동전이 반환됐어요" << endl;
    } else if (state == GUMBALL_SOLD || state == GUMBALL_SOLD_TWICE) {
      cout << "GUMBALL이 나가고 있어요. 잠시 후에 시도해주세요." << endl;
    } else {
      cout << "GUMBALL의 수량이 0개예요." << endl;
    }
  }

  // GUMBALL_SOLD
  // 1. GUMBALL > 0 이면 NO_QUARTER로 변경.
  // 2. GUMBALL == 0 이면 OUT_OF_GUMBALLS로 변경.
  void dispenseGumball() {
    if (state == NO_QUARTER) {
      cout << "동전이 없어요. 동전을 삽입해주세요." << endl;
    } else if (state == HAS_QUARTER) {
      cout << "손잡이를 돌리겠습니까?" << endl;
    } else if (state == GUMBALL_SOLD || state == GUMBALL_SOLD_TWICE) {
      if (numberOfGumball > 0) {
          state = NO_QUARTER;
          cout << "동전 삽입 대기 상태." << endl;
        } else if (numberOfGumball == 0) {
          state = OUT_OF_GUMBALLS;
      }
    } else {
      cout << "GUMBALL의 수량이 0개예요." << endl;
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