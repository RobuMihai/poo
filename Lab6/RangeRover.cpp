#include "RangeRover.h"

RangeRover::RangeRover() {
    this->fuelCapacity = 770.0;
    this->fuelConsumption = 1.0;
}

double RangeRover::calculateTime(double length, Weather weather) {
    double fuelNeeded = length * fuelConsumption;
    if (fuelNeeded > fuelCapacity) {
        return 0.0;
    }
    double averageSpeed = getAverageSpeed(weather);
    return length / averageSpeed;
}

double RangeRover::getFuelCapacity() const{
    return fuelCapacity;
}

double RangeRover::getFuelConsumption() const {
    return fuelConsumption;
}

double RangeRover::getAverageSpeed(Weather weather) const {
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
const char* RangeRover::getName() const {
    return "RangeRover";
}