#pragma once
#include "Car.h"

class BMW : public Car {
public:
    BMW();
    const char* getName() const override;
    double calculateTime(double length, Weather weather) override;
    double getFuelCapacity() const override;
    double getFuelConsumption() const override;
    double getAverageSpeed(Weather weather) const override;

private:
    double fuelCapacity; // in liters
    double fuelConsumption; // in liters per kilometer
};
