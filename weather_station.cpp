#include <iostream>
#include "weather_data.h"
#include "current_display.h"

int main() {
  WeatherData weatherData = WeatherData();

  CurrentConditionDisplay currenDisplay = CurrentConditionDisplay(&weatherData);

  weatherData.setMeasurements(80, 65, 30);
  weatherData.setMeasurements(82, 70, 29);
  weatherData.setMeasurements(78, 90, 29);

  return 0;
}