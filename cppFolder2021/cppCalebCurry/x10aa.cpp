
// g++ x10aa.cpp chrisUtilities.cpp -o hahaha -std=c++11

// FUNCTIONS

#include <iostream>
#include <string>
#include <cmath>
#include "chrisUtilities.h"

// function declaration
int AddTwoNum(int, int);
void myPowerFunction();
double customPowerFunction(double, int);
void customPow(double, int);

int main() {
    using std::cout;
    cout << "hello world\n";

    // function calling
    int xxx = AddTwoNum(888, 999);  cout << xxx;
    spacer(2);

    // myPowerFunction();

    spacer(2);

    cout << "customPowerFunction(10, 3):   " 
            << customPowerFunction(10, 3) << std::endl;

    spacer(2);

    customPow(10, 3);

    spacer(2);
    std::cin.get();
    return 0;
}

// function definition
int AddTwoNum(int xxx, int yyy) {
    return xxx + yyy;
}



// power function:
// #include <cmath>
void myPowerFunction() {
    using std::cout;
    using std::cin;
    using std::endl;

    int base, exponent;
    double output;

    cout << "input your base number: \t";
    cin >> base;
    cout << "input your exponent: \t\t";
    cin >> exponent;

    output = pow(base, exponent);

    cout << "output:\t\t\t\t" << output << endl;


}



double customPowerFunction(double base, int exponent) {

    double result = 1;

    for (int i = 0; i < exponent; i++) {
        result = result * base;
    }

    return result;
}



void customPow(double base, int exponent) {
    std::cout << base << " raised to the "
        << exponent << " power is " << (pow(base, exponent))<< std::endl;
}




/*



*/