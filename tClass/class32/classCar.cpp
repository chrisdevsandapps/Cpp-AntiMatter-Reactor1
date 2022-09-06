



#include <iostream>
#include "classCar.h"
using namespace std;

void accelerateTest() {
    cout << "broom broom!" << endl;
}

void Car::start() {
    if (hasAutoPilot) {
         cout << "car is starting using AutoPilot" << endl;
    } else {
        cout << "car is starting" << endl;
    }
}

void Car::stop() {
    if (hasAutoPilot) {
         cout << "car is stopping using AutoPilot" << endl;
    } else {
        cout << "car is stopping" << endl;
    }
}

void Car::accelerate() {
    if(isElectric) {
        cout << "car is accelerating 0-60 in 3.5seconds" << endl;
    } else {
        cout << "car is accelerating0-60 in 30seconds" << endl;
    }

    if (hasAutoPilot) {
        cout << "car is accelerating using AutoPilot" << endl;
    } else {
        cout << "car is accelerating" << endl;
    }
}

void Car::engageAutoPilot() {
    hasAutoPilot = true;
}
void Car::disEngageAutoPilot() {
    hasAutoPilot = false;
}