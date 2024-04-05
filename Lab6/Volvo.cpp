#include "Volvo.h"

Volvo::Volvo() {
    this->fuelCapacity = 1030.0;
    this->fuelConsumption = 5.0;
}

double Volvo::calculateTime(double length, Weather weather) {
    double fuelNeeded = length * fuelConsumption;
    if (fuelNeeded > fuelCapacity) {
        return 0.0;
    }
    double averageSpeed = getAverageSpeed(weather);
    return length / averageSpeed;
}

double Volvo::getFuelCapacity() const{
    return fuelCapacity;
}

double Volvo::getFuelConsumption() const {
    return fuelConsumption;
}

double Volvo::getAverageSpeed(Weather weather) const {
    switch (weather) {
    case Rain:
        return 60.0;
    case Snow:
        return 40.0;
    case Sunny:
        return 80.0;
    }
    return 0.0;
}
const char* Volvo::getName() const {
    return "Volvo";
}