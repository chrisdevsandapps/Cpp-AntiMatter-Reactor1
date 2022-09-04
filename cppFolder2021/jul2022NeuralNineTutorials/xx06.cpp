

//to compile: g++ xx06.cpp -o hello

#include <iostream>
#include <string>
#include "xx06aaa.h"

void spacer();
void storageClass111();
void storageClass222();
void storageClass333();

int main() {

    storageClass111();

    storageClass222();

    externIntegerSampleUse();

    storageClass333();

    spacer();
    std::cin.get();
    return 0;
}



void storageClass111() {

    // auto storage class
    // the compiler figures out how long the variables should be stored

    auto xxx = 888;  // same as: int xxx = 888;
}





// extern variable:
int externVariable = 888;


void storageClass222() {

    // extern

    std::cout << "externVar current value: " << externVariable << std::endl;

    std::cout << "externVar use 1: " << externVariable + 1000 << std::endl;

}



void storageClass333() {

    // static

    static int staticIntXXX = 999;

    std::cout << "TODO na lang muna itong sample ng STATIC VAR" << std::endl;

    std::cout << "TODO na lang muna itong sample ng REGISTER VAR" << std::endl;

    std::cout << "TODO na lang muna itong sample ng MUTABLE VAR" << std::endl;

    std::cout << "TODO na lang muna itong sample ng THREAD_LOCAL VAR" << std::endl;


}

void add() {

}


void spacer() {
    std::cout << "\n\n" << std::endl;

    std::cout << "############################################" << std::endl;
    std::cout << "############################################" << std::endl;
    std::cout << "############################################" << std::endl;
    std::cout << "############################################" << std::endl;
    std::cout << "############################################" << std::endl;

    std::cout << "\n\n" << std::endl;

}