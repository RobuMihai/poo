#include "Circuit.h"
#include <cstdio>

Circuit::Circuit() {
    length = 1;
    weather = Sunny;
    for (int i = 0; i < 5; ++i) {
        cars[i] = nullptr;
        finishTimes[i] = 0.0;
    }
}

Circuit::~Circuit() {
    for (int i = 0; i < 5; ++i) {
        delete cars[i];
    }
}

void Circuit::SetLength(double length) {
    this->length = length;
}

void Circuit::SetWeather(Weather weather) {
    this->weather = weather;
}

void Circuit::AddCar(Car* car) {
    for (int i = 0; i < 5; ++i) {
        if (!cars[i]) {
            cars[i] = car;
            break;
        }
    }
}

void Circuit::Race() {
    for (int i = 0; i < 5; ++i) {
        if (cars[i]) {
            finishTimes[i] = cars[i]->calculateTime(length, weather);
        }
    }
}

void Circuit::ShowFinalRanks() {
    // Sort finish times and print
    for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            if (finishTimes[i] > finishTimes[j]) {
                double temp = finishTimes[i];
                finishTimes[i] = finishTimes[j];
                finishTimes[j] = temp;
                Car* tempCar = cars[i];
                cars[i] = cars[j];
                cars[j] = tempCar;
            }
        }
    }

    printf("Final Ranks:\n");
    for (int i = 0; i < 5; ++i) {
        if (cars[i]) {
            printf("%s: %.2f seconds\n", cars[i]->getName(), finishTimes[i]);
        }
    }
}

void Circuit::ShowWhoDidNotFinish() {
    // Check which cars did not finish
    printf("\nCars that did not finish:\n");
    for (int i = 0; i < 5; ++i) {
        if (finishTimes[i] == 0) {
            printf("Car %s\n", cars[i]->getName());
        }
    }
}
