



#include <iostream>
#include <unistd.h>
using namespace std;

bool boolValue = true;

void func1() {
  cout << "Choose number below:" << endl;
  cout << "1.\tAdd new record." << endl;
  cout << "2.\tDelete record." << endl;
  cout << "3.\tView record." << endl;
  cout << "4.\tSearch record." << endl;
  cout << "5.\tQuit." << endl;
  cout << "Enter your selection: " << flush;

  int inputtedValue;
  cin >> inputtedValue;

  if (inputtedValue == 1) {
      cout << "Adding new record..." << endl;
      sleep(1);
  } else if (inputtedValue == 2) {
    cout << "Deleting record record..." << endl;
      sleep(1);
  } else if (inputtedValue == 3) {
      cout << "Viewing record..." << endl;
      sleep(1);
  } else if (inputtedValue == 4) {
      cout << "Searching record..." << endl;
      sleep(1);
  } else if (inputtedValue == 5) {
      cout << "Quitting..." << endl;    
      sleep(3);
      boolValue = false;
  } else {
      cout << "invalid option..." << endl;
      sleep(3);
      boolValue = false;
  }
}





int main() {

  while (boolValue) {
    sleep(1);
    cout << "inside while loop" << endl;
    func1();
  }
  
  return 0;
}




  // int value1 = 10;
  // int value2 = 11;

  // bool condition1 = (value1 == 8) && (value2 == 10);
  // bool condition2 = value1 < 20;

  // if (condition1 || condition2) {
  //   cout << "this is true" << endl;
  // }
  // else {
  //   cout << "this is false" << endl;
  // }