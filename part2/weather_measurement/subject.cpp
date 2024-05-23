#include "subject.h"

// Subject 초기화
Subject::Subject() {
    observers = vector<Observer*>();
}

// 구독자 등록
void Subject::registerObserver(Observer* o) { 
  observers.push_back(o); 
}

// 구독 취소
void Subject::removeObserver(Observer* o) {
  for (int i = 0; i < observers.size(); i++) {
    if(observers[i] == o) {
  // 해당 index에 있는 observer객체 구독을 취소.
      observers.erase(observers.begin() + i);
      break;
    }
  }
}

// 구독 알림
void Subject::notifyObservers() {
// Subject의 데이터에 변화가 있다면 
  if (changed) {
// 배열을 순회하며 배열에 있는 옵저버에게
  for (int i = 0; i < observers.size(); i++ ) {
    // 옵저버의 update 메서드에 온도, 습도, 기압을 넘겨줘 값을 알림.
    observers[i]->update();
    }
    // 상태 변화에 대한 알림이 갔으므로 변경 상태를 false로 변경.
    changed = false;
  }
}