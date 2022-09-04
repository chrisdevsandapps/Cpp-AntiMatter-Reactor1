
// g++ x42aa.cpp chrisUtilities.cpp -o hahaha -std=c++11

// 42. intro to our app

#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <cmath>

#include "chrisUtilities.h"


void tuts43();
void playGame();

int main() {
    using std::cout;
    cout << "\nC++ Programming Tutorial 42 - Intro To Our App\n";

    tuts43();

    spacer(2);
    std::cin.get();
    return 0;
}


// C++ Programming Tutorial 43 - Creating a Menu
void tuts43() {

    using std::cout;
    using std::cin;
    using std::endl;

    int consoleChoice;

    do {
        cout << "\n0 ---> Quit" << endl << "1 ---> Play Game\n" << endl;

        cin >> consoleChoice;

        switch (consoleChoice) {
            case 0:
                cout << "Bye!";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                // std::cin.get();
                return ;
            case 1:
                cout << "Lets Play!" << endl;
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                playGame();
                break;
        }

    } while (consoleChoice != 0);


}

void playGame() {
    std::cout << "playing game" << std::endl;
}




/*

https://stackoverflow.com/questions/19439672/sleep-operation-in-c-on-os-x

*/