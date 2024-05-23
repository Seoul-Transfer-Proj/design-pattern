#include "forecast.h"
#include <iostream>
using namespace std;

ForecastDisplay::ForecastDisplay(WeatherData* subject) {
  observable = subject;
  observable->registerObserver(this);
}

void ForecastDisplay::update() {
  lastPressure = currentPressure;
  currentPressure = observable->getPressure();
  display();
}

void ForecastDisplay::display(){
  cout << "Current Pressure: " << currentPressure << endl;
}