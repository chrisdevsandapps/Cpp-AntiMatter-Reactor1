



#include <iostream>
#include "classCar.h"
using namespace std;

void accelerate() {
    cout << "broom broom!" << endl;
};

void Car::start() {
    cout << "car is starting" << endl;
};

void Car::stop() {
    cout << "car is stopping" << endl;
};

void Car::accelerate() {
    cout << "car is accelerating" << endl;
};