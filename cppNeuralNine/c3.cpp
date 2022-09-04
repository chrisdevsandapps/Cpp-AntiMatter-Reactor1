

// call by reference and call by value

// https://www.youtube.com/watch?v=1-6x8r7030Y&list=PL7yh-TELLS1HSmBcqYk9LhPYSWp31FWH2&index=13


#include <iostream>
using namespace std;

void funcPassByValue(int);
void funcPassByRef(int &ref);
void printInt(string, int);
void spacer();

int main() {
    spacer();

    int aaa = 888;
    printInt("outputOf aaa", aaa);

    funcPassByValue(aaa);

    printInt("outputOf aaa", aaa);


    spacer();


    int bbb = 999;
    printInt("outputOf bbb", bbb);

    funcPassByRef(bbb);

    printInt("outputOf bbb", bbb);


    // PAUSE:
    // https://youtu.be/1-6x8r7030Y?t=244


    return 0;
}


void funcPassByValue(int xxx) {
    xxx = xxx + 1;
    cout << "funcPassByVal Output: \t" << xxx << endl;
}

void funcPassByRef(int &ref) {
    ref = ref + 1;
    cout << "funcPassByRef Output: \t" << ref << endl;
}

void printInt(string textDescription, int intOutput) {
    cout << textDescription <<": " << intOutput << endl;
}


void spacer() {
    cout << " " << endl;
    cout << " " << endl;
}