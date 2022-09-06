#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <ctime>


using std::cout;
using std::endl;

void randomIntegerOutput() {
    
    // Generate a random number up to 10
    int secretNum = rand() % 11;
    std::string xx1 = "the secret number is: ";
    cout << xx1 << secretNum << endl;
}

int main(){

    // We need to seed the random number generator
    // time() returns the number of seconds
    // since 1, 1, 1970
    // #include <ctime>
    srand(time(NULL));

    randomIntegerOutput();
    randomIntegerOutput();
    randomIntegerOutput();
    randomIntegerOutput();
    randomIntegerOutput();
    randomIntegerOutput();
    randomIntegerOutput();
    randomIntegerOutput();
 

}



