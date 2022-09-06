

#include <iostream>
#include "topicInput.h"



void inputExample111() {

    std::cout << "inputExample111():" << std::endl;

    std::string name;
    
    std::cout << "user input" << std::endl;

    std::cout << "please enter your name:  " << std::endl;

    std::cin >> name;

    std::cout << "ohh hello there " << name << "!!" << std::endl;

}







void inputExample222() {

    std::cout << "inputExample222():" << std::endl;

    int num1, num2;

    std::cout << "Please enter the first number:  ";
    std::cin >> num1;

    std::cout << "Please enter the second number:  ";
    std::cin >> num2;

    std::cout << "\nThe sum is:  " << num1 + num2 << std::endl;




}