#pragma once
#include "Car.h"

class Circuit {
public:
    Circuit();
    ~Circuit();

    void SetLength(double length);
    void SetWeather(Weather weather);
    void AddCar(Car* car);
    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();

private:
    double length;
    Weather weather;
    Car* cars[5];
    double finishTimes[5];
};
