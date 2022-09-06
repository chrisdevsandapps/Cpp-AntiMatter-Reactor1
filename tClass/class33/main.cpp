

// constructors and destructors


#include <iostream>
#include "classDog.h"
using namespace std;

int main() {
    cout << "starting program.\n\n" << endl;
{
    Dog mocha;
    mocha.makeHappy();
    mocha.speak();
}
    cout << "\n################\n" << endl;
{
    Dog bill;
    bill.makeSad();
    bill.speak();
}
    cout << "\n\nending program." << endl;

    return 0;
}


