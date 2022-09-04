//to compile: g++ xx03.cpp -o hello.exe

#include <iostream>



int main() {
    
    std::cout << "arithmetic operators" << std::endl;

    int aa = 10;
    int bb = 100;

    std::cout << aa % bb << std::endl;

    aa += 10;
    std::cout << aa << std::endl;

    aa++;
    std::cout << aa << std::endl;


    std::cout << "arithmetic operators" << std::endl;
    // comparison operators
    int cc = 30, dd = 30;
    std::cout << "(cc <= dd):  " << (cc <= dd) << std::endl;

    std::cout << "(cc > dd):  " << (cc > dd) << std::endl;

    std::cout << "(cc < dd) && (cc > 100):  " 
            << ((cc < dd) && (cc > 100)) << std::endl;

    std::cout << "!(cc < dd) && (cc > 100):  " 
            << (!(cc < dd) && (cc > 100)) << std::endl;





    return 0;
}