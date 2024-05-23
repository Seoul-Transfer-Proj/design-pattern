#ifndef CURRENTDISPLAY_H
#define CURRENTDISPLAY_H

#include "observer_interface.h"
#include "subject.h"
#include "weather_data.h"

class CurrentConditionDisplay : public Observer, Displayment {
private:
  int temperature;
  int humidity;
  WeatherData* observable;
public:
  CurrentConditionDisplay(WeatherData* subject);
  void update() override ;
  void display() override ;
  double calculateHeatIndex(double temperature, double humidity);
};

#endif