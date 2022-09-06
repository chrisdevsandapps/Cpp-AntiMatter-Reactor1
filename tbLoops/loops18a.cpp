




#include <iostream>
#include <unistd.h>
using namespace std;


int main() {

  int i = 0;

  cout << "initial \"i\" count before while-loop: " << i << endl;

  while (i < 10) {  
    cout << "count: " << i << endl;
    i = i + 1;
    sleep(1);
  }

  cout << "final \"i\" count outside of while-loop: " << i << endl;

  return 0;
}