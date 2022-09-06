



#include<cstdlib>
#include<iostream>
#include<string>
#include<limits>
#include<cmath>
#include<ctime>

// this_thread::sleep_for example
#include <iostream>       // std::cout, std::endl
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

int main(int argc, char* argv[]) {

    std::cout << "hello world" << std::endl;

    std::cout << "countdown:\n";

    for (int i=10; i>0; --i) {
        std::cout << i << std::endl;
        std::this_thread::sleep_for (std::chrono::seconds(1));
    }
    std::cout << "Lift off!\n";

    // https://www.cplusplus.com/reference/thread/this_thread/sleep_for/



    return 0;
}





