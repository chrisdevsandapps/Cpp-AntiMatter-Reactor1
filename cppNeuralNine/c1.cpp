



#include <iostream>

using namespace std;

int addTwoNum(int, int);
void printInt(string, int);



int main() {

    cout << "hello world" << endl;

    int num1 = 888;
    int num2 = 999;

    int sum1 = addTwoNum(num1, num2);
    printInt("output", sum1);

    cin.get();

    return 0;
}

int addTwoNum(int aaa, int bbb) {
    int sum = aaa + bbb;
    return sum;
}


void printInt(string textDescription, int intOutput) {
    cout << textDescription <<": " << intOutput << endl;
}

