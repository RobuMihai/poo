#include "Fiat.h"

Fiat::Fiat() {
    this->fuelCapacity = 500.0;
    this->fuelConsumption = 5.0;
}

double Fiat::calculateTime(double length, Weather weather) {
    double fuelNeeded = length * fuelConsumption;
    if (fuelNeeded > fuelCapacity) {
        return 0.0;
    }
    double averageSpeed = getAverageSpeed(weather);
    return length / averageSpeed;
}

double Fiat::getFuelCapacity() const {
    return fuelCapacity;
}

double Fiat::getFuelConsumption() const {
    return fuelConsumption;
}

double Fiat::getAverageSpeed(Weather weather) const {
    switch (weather) {
    case Rain:
        return 50.0;
    case Snow:
        return 30.0;
    case Sunny:
        return 70.0;
    }
    return 0.0;
}
const char* Fiat::getName() const {
    return "Fiat";
}