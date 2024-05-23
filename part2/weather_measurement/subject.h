#ifndef SUBJECT_H
#define SUBJECT_H

#include "observer_interface.h"
#include "weather_object.h"
#include <vector>
using namespace std;

class Subject {
private:
  vector<Observer*> observers;
  bool changed;
public:
  Subject();
  void registerObserver(Observer* o);
  void removeObserver(Observer* o);
  void notifyObservers();
  void setChanged() { changed = true; }
};

#endif