#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "observer_interface.h"
#include "subject.h"
#include "weather_object.h"

class WeatherData : public Subject {
private:
  WeatherObject weatherObj;
public:
  WeatherData() {}

  void measurementsChanged() {
    //기상청에서 기상 관련 데이터 측정에 업데이트가 생겼을 때 옵저버에게 알려준다.
    setChanged();
    notifyObservers();
  };
  void setMeasurements(int temperature, int humidity, int pressure);

  // 옵저버에서 필요할 때 데이터를 끌어다 씀(Pull)
  int getTemperature() { return weatherObj.temperature; }
  int getHumidity() { return weatherObj.humidity; }
  int getPressure() { return weatherObj.pressure; }
};

#endif