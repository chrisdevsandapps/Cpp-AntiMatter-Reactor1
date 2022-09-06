#include<iostream>

using namespace std;

void divideTwoNums(float num1, float num2);

int main() {

    float number1, number2;
    char arithmeticOperator;



    cout << "calculator app:" << endl;
    cout << "input first number: " << endl;
    cin >> number1;
    cout << "input arithmetic operation: " << endl;
    cin >> arithmeticOperator;
    cout << "input second number: " << endl;
    cin >> number2;

    cout << "result: " << endl;

    switch (arithmeticOperator) {
        case '+' : cout << number1 + number2 << endl; break;
        case '-' : cout << number1 - number2 << endl; break;
        case '*' : cout << number1 * number2 << endl; break;
        case '/' : divideTwoNums(number1, number2); break;
        default: cout << "operation should only be: +  -  *  /" << endl;
    }


    return 0;
}


void divideTwoNums(float num1, float num2) {
    cout << "quotient: " << num1 / num2 << endl;

    bool isNum1Int, isNum2Int;
    isNum1Int = ((int)num1 == num1);
    isNum2Int = ((int)num2 == num2);

    if (isNum1Int && isNum2Int) {
        cout << "remainder: " << (int)num1 % (int)num2 << endl;
    } else {
        cout << "not integer" << endl;
    }
}


