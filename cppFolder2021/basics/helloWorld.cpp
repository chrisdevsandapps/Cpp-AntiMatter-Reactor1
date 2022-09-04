

#include <iostream>

using namespace std;

int main () {


  cout << "hello world!" << endl;
  cout << "hahaha!!!" << endl;

  cout << "banana" << " " << "apple" << " " << "orange" << endl;



  // ###########################################################



  int numberOfCars = 5;
  int numberOfHouse = 3;
  int numberOfProperties = numberOfCars + numberOfHouse;

  cout << "i have " << numberOfCars << " cars, and " << numberOfHouse << " houses" << endl;

  cout << "total number of properties: " << numberOfProperties << endl;



  // ###########################################################



  string text1 = "hello there ";
  string text2 = "Bill!";
  string text3 = text1 + text2;

  cout << text3 << endl;



  // ###########################################################

  
  cout << "enter your name: " << flush;

  string inputtedText;

  cin >> inputtedText;

  cout << "hello there " << inputtedText << "!!!" << endl;



  // ###########################################################


  int inputNum1, inputNum2;
  
  cout << "addition, input only integer numbers:" << endl;

  cout << "enter first number: " << flush;
  cin >> inputNum1;

  cout << "enter second number: " << flush;
  cin >> inputNum2;

  int numberSum = inputNum1 + inputNum2;

  cout << "the Sum is: " << numberSum << endl; 




  return 0;
}