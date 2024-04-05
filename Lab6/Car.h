#pragma once
#include "Weather.h"

class Car {
public:
    virtual const char* getName() const = 0;
    virtual double calculateTime(double length, Weather weather) = 0;
    virtual double getFuelCapacity() const = 0;
    virtual double getFuelConsumption() const = 0;
    virtual double getAverageSpeed(Weather weather) const = 0;
};
