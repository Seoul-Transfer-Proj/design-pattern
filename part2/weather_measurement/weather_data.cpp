#include "observer_interface.h"
#include "weather_data.h"
#include <iostream>
#include <algorithm>
using namespace std;

void WeatherData::setMeasurements(int temperature, int humidity, int pressure) {
    this->weatherObj.temperature = temperature;
    this->weatherObj.humidity = humidity;
    this->weatherObj.pressure = pressure;
    measurementsChanged();
}