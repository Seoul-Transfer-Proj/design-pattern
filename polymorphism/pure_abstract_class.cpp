#include <iostream>
using namespace std;

enum note { middleC, Csharp, Eflat };

class Instrument {
public:
  virtual void play(note) const = 0;
  virtual string what() const  = 0;
  virtual void adjust(int) = 0;
};

class Wind : public Instrument {
public:
  void play(note) const {
    cout << "Wind::play" << endl;
  }
  string what() const {
    return "Wind";
  }
  void adjust(int) {}
};

class Percussion : public Instrument {
public:
  void play(note) const {
    cout << "Percussion::play" << endl;
  }
  string what() const {
    return "Percussion";
  }
  void adjust(int) {}
};

class Stringed : public Instrument {
public:
  void play(note) const {
    cout << "Stringed::play" << endl;
  }
  string what() const {
    return "Stringed";
  }
  void adjust(int) {}
};

// adjust 메서드를 재정의하지 않았지만 에러 X
// 상속 위계에서 가장 가까운(Wind) 해당 함수의 정의(definition)가 자동으로 사용됨.
// 컴파일러가 가상 함수의 바인딩을 보장함.
class Brass : public Wind {
public:
  void play(note) const {
    cout << "Brass::play" << endl;
  }
  string what() const {
    return "Brass";
  }
};

void tune(Instrument& i) {
  i.play(middleC);
}

void f(Instrument& i) { i.adjust(1); }

int main() {
  Wind flute;
  Percussion drum;
  Stringed violin;
  Brass flugelhorn;
  tune(flute);
  tune(drum);
  tune(violin);
  tune(flugelhorn);

  return 0;
};