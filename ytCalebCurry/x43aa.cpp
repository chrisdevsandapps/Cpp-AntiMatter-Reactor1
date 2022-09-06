
// g++ x43aa.cpp chrisUtilities.cpp -o hahaha -std=c++11

// C++ Programming Tutorial 44 - Creating a Guessing Game

#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

#include "chrisUtilities.h"


void tuts43();
void playGame();

int main() {
    using std::cout;
    cout << "\nC++ Programming Tutorial 44 - Creating a Guessing Game\n";

    cout << "\nGuessing Game\n";

    //seeding the randomNumberGenerator
    srand(time(NULL));

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

// C++ Programming Tutorial 44 - Creating a Guessing Game
void playGame() {
    std::cout << "i am now playing the game!!!" << std::endl;

    //make random number
    int randomNUm = rand() % 251;
    std::cout << "\nrandom number output: " << randomNUm << std::endl;

    //guess the number
    std::cout << "guess the number: ";

    while (true) {
        int guessedNum;
        std::cin >> guessedNum;

        if (guessedNum == randomNUm) {
            std::cout << "you win! ";
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            break;
        }
        else if (guessedNum < randomNUm) {
            std::cout << "too low ";
        }
        else {
            std::cout << "too high ";
        }
    }

}




/*

https://stackoverflow.com/questions/19439672/sleep-operation-in-c-on-os-x

*/