#include "BMW.h"

BMW::BMW() {
    this->fuelCapacity = 100.0;
    this->fuelConsumption = 100.0;
}

double BMW::calculateTime(double length, Weather weather) {
    double fuelNeeded = length * fuelConsumption;
    if (fuelNeeded > fuelCapacity) {
        return 0.0;
    }
    double averageSpeed = getAverageSpeed(weather);
    return length / averageSpeed;
}

double BMW::getFuelCapacity() const {
    return fuelCapacity;
}

double BMW::getFuelConsumption() const {
    return fuelConsumption;
}

double BMW::getAverageSpeed(Weather weather) const {
    switch (weather) {
    case Rain:
        return 65.0;
    case Snow:
        return 45.0;
    case Sunny:
        return 85.0;
    }
    return 0.0;
}
const char* BMW::getName() const {
    return "BMW";
}