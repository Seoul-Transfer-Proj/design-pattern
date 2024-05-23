#include "current_display.h"
#include <iostream>
using namespace std;

CurrentConditionDisplay::CurrentConditionDisplay(Subject* initialWeatherData) {
    weatherData = initialWeatherData;
    weatherData->registerObserver(this);
}

void CurrentConditionDisplay::update(int temperature, int humidity, int pressure) {
    this->temperature = temperature;
    this->humidity = humidity;
    display();
}

void CurrentConditionDisplay::display() {
    cout << "현재 상태: " << temperature << "F degree and 습도 " << humidity << "%" << endl;
    cout << "체감 온도 (Heat Index): " << this->calculateHeatIndex(temperature, humidity) << "°C" << endl;
}

double CurrentConditionDisplay::calculateHeatIndex(double temperature, double humidity) {
    double c1 = -8.78469475556;
    double c2 = 1.61139411;
    double c3 = 2.33854883889;
    double c4 = -0.14611605;
    double c5 = -0.012308094;
    double c6 = -0.0164248277778;
    double c7 = 0.002211732;
    double c8 = 0.00072546;
    double c9 = -0.000003582;

    double heatIndex = c1 + (c2 * temperature) + (c3 * humidity) + (c4 * temperature * humidity) +
                       (c5 * pow(temperature, 2)) + (c6 * pow(humidity, 2)) +
                       (c7 * pow(temperature, 2) * humidity) + (c8 * temperature * pow(humidity, 2)) +
                       (c9 * pow(temperature, 2) * pow(humidity, 2));
    return heatIndex;
}