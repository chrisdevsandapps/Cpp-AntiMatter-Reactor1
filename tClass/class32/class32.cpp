




#include <iostream>
#include "classCar.h"
using namespace std;



int main() {
    accelerateTest();

    Car c1;
    c1.isElectric = true;
    // c1.disEngageAutoPilot();
    c1.engageAutoPilot();
    c1.start();
    c1.accelerate();
    c1.stop();

    return 0;
}


