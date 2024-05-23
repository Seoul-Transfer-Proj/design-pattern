#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "observer_interface.h"
#include "subject.h"
#include <iostream>
#include <vector>
using namespace std;

class WeatherData : public Subject {
private:
  vector<Observer*> observers;
  int temperature;
  int humidity;
  int pressure;
public:
  WeatherData() {
    observers = vector<Observer*>();
  }
  //옵저버 배열의 끝에 Observer 객체를 추가한다. 
  void registerObserver(Observer* o) override { observers.push_back(o); };

  void removeObserver(Observer* o) override ;

  void notifyObservers() override ;

  void measurementsChanged();
  void setMeasurements(int temperature, int humidity, int pressure);
};

#endif