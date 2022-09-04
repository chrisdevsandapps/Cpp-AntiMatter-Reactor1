#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

int main(){

    // We need to seed the random number generator
    // time() returns the number of seconds
    // since 1, 1, 1970
    // #include <ctime>
    srand(time(NULL));

 
    // Generate a random number up to 10
    int secretNum = rand() % 11;
    cout << "Secret Number : " << secretNum << "\n";


}



