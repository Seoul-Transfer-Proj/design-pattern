#include "observer_interface.h"
#include "weather_data.h"
#include <iostream>
#include <algorithm>
using namespace std;

void WeatherData::removeObserver(Observer* o)  {
  // 삭제할 Observer 객체의 인덱스를 찾아낸다.
  for (int i = 0; i < observers.size(); i++) {
    if(observers[i] == o) {
  // 해당 index에 있는 observer객체를 제외.
      observers.erase(observers.begin() + i);
      break;
      }
    }
  }

void WeatherData::notifyObservers() {
  // 배열을 순회하며 배열에 있는 옵저버에게
  for (int i = 0; i < observers.size(); i++ )
  // 옵저버의 update 메서드에 온도, 습도, 기압을 넘겨줘 값을 알린다.
    observers[i]->update(temperature, humidity, pressure);
  }

void WeatherData::measurementsChanged() {
  //기상청에서 기상 관련 데이터 측정에 업데이트가 생겼을 때 옵저버에게 알려준다.
  notifyObservers();
}

void WeatherData::setMeasurements(int temperature, int humidity, int pressure) {
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    measurementsChanged();
}