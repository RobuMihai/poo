#include "Seat.h"

Seat::Seat() {
    this->fuelCapacity = 5512.0;
    this->fuelConsumption = 10.0;
}

double Seat::calculateTime(double length, Weather weather) {
    double fuelNeeded = length * fuelConsumption;
    if (fuelNeeded > fuelCapacity) {
        return 0.0;
    }
    double averageSpeed = getAverageSpeed(weather);
    return length / averageSpeed;
}

double Seat::getFuelCapacity() const {
    return fuelCapacity;
}

double Seat::getFuelConsumption() const {
    return fuelConsumption;
}

double Seat::getAverageSpeed(Weather weather) const {
    switch (weather) {
    case Rain:
        return 55.0;
    case Snow:
        return 35.0;
    case Sunny:
        return 75.0;
    }
    return 0.0;
}
const char* Seat::getName() const {
    return "Seat";
}