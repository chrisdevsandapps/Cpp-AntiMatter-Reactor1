

#include <iostream>

using namespace std;

// int main () {


//   string passwordX = "password123";

//   cout << "enter your password: " << flush;

//   string inputPw;
//   cin >> inputPw;

//   if (inputPw == passwordX) {
//     cout << "password accepted" << endl;
//   }

//   if (inputPw != passwordX) {
//     cout << "access denied" << endl;
//   }

//   return 0;
// }









// int main() {

//   cout << "1.\tAdd new record." << endl;
//   cout << "2.\tDelete record." << endl;
//   cout << "3.\tView record." << endl;
//   cout << "4.\tSearch record." << endl;
//   cout << "5.\tQuit." << endl;

//   cout << "Enter your selection: " << flush;

//   int inputtedValue;
//   cin >> inputtedValue;

//   if (inputtedValue < 5) {
//     cout << "Insufficient priviledges to use the menu options." << endl;
//   }
//   else {
//     cout << "Privilege level sufficient" << endl;
//   }
  

//   if (inputtedValue == 5) {
//     cout << "program quitting ..." << endl;
//   }
//   else {
//     cout << "program continuing ... " << endl;
//   }


//   return 0;
// }




int main() {

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
  }
  else if (inputtedValue == 2) {
    cout << "Deleting record record..." << endl;
  }
    else if (inputtedValue == 3) {
      cout << "Viewing record..." << endl;
  }
    else if (inputtedValue == 4) {
      cout << "Searching record..." << endl;
  }
    else if (inputtedValue == 5) {
      cout << "Quitting..." << endl;
  }
  else {
    cout << "invalid option..." << endl;
  }

  

  return 0;

}