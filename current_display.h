#ifndef CURRENTDISPLAY_H
#define CURRENTDISPLAY_H

#include "observer_interface.h"
#include "subject.h"

class CurrentConditionDisplay : public Observer, Displayment {
private:
  int temperature;
  int humidity;
  Subject* weatherData;
public:
  CurrentConditionDisplay(Subject* initialWeatherData);
  void update(int temperature, int humidity, int pressure) override ;
  void display() override ;
  double calculateHeatIndex(double temperature, double humidity);
};

#endif