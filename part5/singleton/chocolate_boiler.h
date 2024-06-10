#ifndef CHOCOBOILER_H
#define CHOCOBOILER_H

#include <mutex>

class ChocolateBoiler {
private:
  bool empty = true;
  bool boiled = false;
  static std::mutex mutex;
  static ChocolateBoiler* chocolateBoilerInstance;
  static ChocolateBoiler* chocolateBoilerInstance1;
  ChocolateBoiler() {}
public:
  ChocolateBoiler(const ChocolateBoiler& obj) = delete;
  ChocolateBoiler operator=(const ChocolateBoiler&) = delete;

  // 1. Synchonized 방식 그대로 사용
  // getInstance 메서드 호출 마다
  // 스레드가 해당 메서드를 사용할 동안 다른 스레드는 실행 불가.
  // 일반 getInstance보다 100배 느림.
  static ChocolateBoiler* getInstance() { 
    std::lock_guard<std::mutex> lock(mutex);
    if (chocolateBoilerInstance == nullptr) {
      chocolateBoilerInstance = new ChocolateBoiler();
    }
    return chocolateBoilerInstance;
   }
   // 2. 클래스가 load될 때부터 인스턴스를 초기화하고 반환.
   static ChocolateBoiler* getInstance2() {
    return chocolateBoilerInstance1;
   }
   // 3. Double-Checked Locking
   // 인스턴스가 초기화 됐는지 확인할 때만 lock 걸기.
   static ChocolateBoiler* getInstance3() {
    // 인스턴스가 nullptr면
    if (chocolateBoilerInstance == nullptr) {
    // 스레드 A가 아래 코드를 실행하는 동안 lock 검. (다른 스레드 대기)
    // 락 풀린 후 다른 스레드 접근 시 바로 return(인스턴스가 초기화됐기 때문)
      std::lock_guard<std::mutex> lock(mutex);
    // 한 번 더 null인지 체크하고 맞으면 인스턴스 초기화
        if (chocolateBoilerInstance == nullptr) {
        chocolateBoilerInstance = new ChocolateBoiler();
        }
    }
    return chocolateBoilerInstance;
   }
  void fill();
  void drain();
  void boil();
  bool isempty() { return empty; }
  bool isBoiled() { return boiled; }
};

#endif 