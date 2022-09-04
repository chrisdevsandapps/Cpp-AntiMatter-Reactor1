

// sample ng static variable sa

// https://www.youtube.com/watch?v=dfZas333wXY&list=PL7yh-TELLS1HSmBcqYk9LhPYSWp31FWH2&index=12


#include <iostream>
using namespace std;
void myFunction();

int main() {

    myFunction();
    myFunction();
    myFunction();
    myFunction();
    myFunction();
    myFunction();

    return 0;
}


void myFunction() {
    static int xxx = 0;
    xxx = xxx + 1;
    cout << "value: " << xxx << endl;
}