#include <iostream>
#include "weather_data.h"
#include "subject.h"
#include "current_display.h"
#include "displayment/forecast.h"

int main() {
  WeatherData weatherData = WeatherData();

  CurrentConditionDisplay currenDisplay = CurrentConditionDisplay(&weatherData);
  ForecastDisplay forecastDisplay = ForecastDisplay(&weatherData);

  weatherData.setMeasurements(80, 65, 30);
  weatherData.setMeasurements(82, 70, 36);
  weatherData.setMeasurements(78, 90, 46);

  return 0;
}