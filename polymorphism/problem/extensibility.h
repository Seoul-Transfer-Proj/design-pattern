#ifndef EXTENSIBILITY_H
#define EXTENSIBILITY_H

#include <iostream>
using namespace std;

enum note { middleC, Csharp, Eflat };

class Instrument {
public:
  virtual void play(note) const {
    cout << "Instrument::play" << endl;
  }
  virtual char* what() const {
    return "Instrument";
  }
  virtual void adjust(int) {}
};

class Wind : public Instrument {
public:
  void play(note) const {
    cout << "Instrument::play" << endl;
  }
  virtual char* what() const {
    return "Wind";
  }
  virtual void adjust(int) {}
};

class Percussion : public Instrument {
public:
  void play(note) const {
    cout << "Percussion::play" << endl;
  }
  virtual char* what() const {
    return "Percussion";
  }
  virtual void adjust(int) {}
};

class Stringed : public Instrument {
public:
  void play(note) const {
    cout << "Stringed::play" << endl;
  }
  virtual char* what() const {
    return "Stringed";
  }
  virtual void adjust(int) {}
};

// adjust 메서드를 재정의하지 않았지만 에러 X
// 상속 위계에서 가장 가까운(Wind) 해당 함수의 정의(definition)가 자동으로 사용됨.
// 컴파일러가 가상 함수의 바인딩을 보장함.
class Brass : public Wind {
public:
  void play(note) const {
    cout << "Brass::play" << endl;
  }
  virtual char* what() const {
    return "Brass";
  }
};

void tune(Instrument& i) {
  i.play(middleC);
}

void f(Instrument& i) { i.adjust(1); }

#endif 