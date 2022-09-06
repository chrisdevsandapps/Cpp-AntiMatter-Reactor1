



#include <iostream>
#include <unistd.h>
using namespace std;


int main() {

    for (int i = 0; i < 10; i++) {
        cout << "count: " << i << endl;
        sleep(10);
    }

    return 0;
}