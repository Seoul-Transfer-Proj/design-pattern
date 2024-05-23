#ifndef FORECAST_H
#define FORECAST_H

#include "../observer_interface.h"
#include "../weather_data.h"

class ForecastDisplay : public Observer, Displayment {
private:
  WeatherData* observable;
  int currentPressure = 29;
  int lastPressure;
public:
  ForecastDisplay(WeatherData* subject);
  void update() override ;
  void display() override ;
};


#endif