#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
using namespace std;

enum note { middleC, Csharp, Eflat };

class Instrument {
public:
  virtual void play(note) const {
    cout << "Instrument::play" << endl;
  }
};

class Wind : public Instrument {
public:
  void play(note) const {
    cout << "Wind::play" << endl;
  }
};

void tune (Instrument& i) {
  i.play(middleC);
}

void tune1(Instrument* p) {
  p->play(middleC);
}

#endif 