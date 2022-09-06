
// g++ x45aa.cpp chrisUtilities.cpp -o hahaha -std=c++11

// C++ Programming Tutorial 45 - Intro to Arrays and Vectors

#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <array>

#include "chrisUtilities.h"


void tuts45();
void tuts46();
// void printIntArray(int);

int main() {

    tuts45();

    spacer(2);

    tuts46();




    spacer(2);
    std::cin.get();
    return 0;
}


void tuts45() {
    using std::cout;
    cout << "\nC++ Programming Tutorial 45 - Intro to Arrays and Vectors\n";
}


void tuts46() {

    std::cout << "\nC++ Programming Tutorial 46 - Working with Arrays\n";

    int arrA[6] = {10, 39, 84, 62, 71, 28};

    for (int i = 0; i < 6; i++) {
        std::cout << arrA[i] << "\t";
    }

    std::cout << "\nat index-0: " << arrA[0] << std::endl;
    std::cout << "at index-1: " << arrA[1] << std::endl;
    std::cout << "at index-2: " << arrA[2] << std::endl;
    std::cout << "at index-3: " << arrA[3] << std::endl;
    std::cout << "at index-4: " << arrA[4] << std::endl;
    std::cout << "at index-5: " << arrA[5] << std::endl;

    arrA[0] = 111;
    arrA[1] = 111;
    arrA[2] = 111;
    arrA[3] = 111;
    arrA[4] = 111;
    arrA[5] = 111;

    std::cout << "size: " << (sizeof(arrA)/sizeof(arrA[0])) << std::endl;

    for (int i = 0; i < 6; i++) {
        std::cout << arrA[i] << "\t";
    }



}


// void printIntArray(int arrayInput) {
    
//     size_t arrSize = sizeof(arrayInput) / sizeof(arrayInput[0]);

//     for (size_t i = 0; i < arrSize; i++) {
//         std::cout << arrayInput[i] << ' ';
//     }


// }



/*

https://www.techiedelight.com/print-contents-array-cpp/

*/