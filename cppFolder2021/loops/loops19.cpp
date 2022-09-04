#include <iostream>
#include <unistd.h>
using namespace std;

int main() {

//   int value = 0;

//   cout << "initial \"value\" count before do-while-loop: " << value << endl;

//   do {
//     cout << "count: " << value << endl;
//     value = value + 1;
//     sleep(1);
//   } while (value < 10);

//   cout << "final \"value\" count outside of do-while-loop: " << value << endl;



  const string password = "hello";
  string inputtedPW;

  do {
      sleep(1);
      cout << "enter password: " << endl;
      cin >> inputtedPW;
      if (inputtedPW != password) {
          sleep(1);
          cout << "access denied" << endl;
      } 
      sleep(1);
  } while (inputtedPW != password);

  cout << "password accepted" << endl;
  sleep(1);

  return 0;
}


