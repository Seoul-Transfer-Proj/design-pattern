#include "has_quarter.h"

void HasQuarter::turnsCrank() {
    cout << "GUMBALL 나가는 중.." << endl;
    int turnedCrankCount = gumballStateMachine.getTurnedCrankCount();
    int numberOfGumball = gumballStateMachine.getNumberOfGumball();
    int reservedGumball = gumballStateMachine.getReservedGumball();

    gumballStateMachine.setTurnedCrank(turnedCrankCount + 1);
  //TODO: Case1, 2에 대한 대응
  // Case 2: 이벤트(공을 2개씩 지급하는 경우)
    if ( turnedCrankCount%10 == 0 ) {
    // Case 2-2: 미지급(공이 1개 남은 경우)
      if (numberOfGumball == 1) {
          cout << "Gumball이 1개 밖에 남지 않았어요. 다음에 오실 때 1개 더 드릴게요." << endl;
          gumballStateMachine.setReservedGumball(reservedGumball + 1);
          gumballStateMachine.setState(gumballStateMachine.soldState);
          gumballStateMachine.setNumberOfGumBall(numberOfGumball - 1);
          cout << "GUMBALL이 나왔어요. GUMBALL을 가져가세요." << endl;
        } else {
        // Case 2-1: 정상 지급(공을 2개 지급하는 경우)
          gumballStateMachine.setState(gumballStateMachine.winnerState);
          gumballStateMachine.setNumberOfGumBall(numberOfGumball - 2);
          cout << "축하합니다! GUMBALL이 2개 나왔어요. GUMBALL을 가져가세요." << endl;
        }
      // Case 1: 정상 지급하는 경우
      } else {
        // Case 1-2: 비정상 지급(#Case2-2에서 못받은 공이 있는 경우)
        if (reservedGumball > 0) {
          cout << "저번에 못가져 가신 Gumball도 함께 드릴게요." << endl;
          gumballStateMachine.setReservedGumball(reservedGumball - 1);
          gumballStateMachine.setNumberOfGumBall(numberOfGumball - 2);
          gumballStateMachine.setState(gumballStateMachine.soldState);
          cout << "GUMBALL이 2개 나왔어요. GUMBALL을 가져가세요" << endl;
        }
        // Case 1-1: 정상 지급
        gumballStateMachine.setNumberOfGumBall(numberOfGumball - 1);
        gumballStateMachine.setState(gumballStateMachine.soldState);
        cout << "GUMBALL이 나왔어요. GUMBALL을 가져가세요." << endl;
      }
  }

void HasQuarter::ejectsQuarter() {
    cout << "동전 나가는 중" << endl;
     gumballStateMachine.setState(gumballStateMachine.noQuarterState);
  }