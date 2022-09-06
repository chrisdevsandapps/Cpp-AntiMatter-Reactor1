

#include <iostream>
#include "classDog.h"
using namespace std;


void Dog::speak() {
    cout << "executing dogSpeak():" << endl;

    if (happy) {
        cout << "Whoop whoop! hahaha!" << endl;
    }
    else {
        cout << "grrrr!" << endl;
    }
}

void Dog::makeHappy() {
    cout << "executing makeHappy():" << endl;
    happy = true;
}

void Dog::makeSad() {
    cout << "executing makeSad():" << endl;
    happy = false;
}

