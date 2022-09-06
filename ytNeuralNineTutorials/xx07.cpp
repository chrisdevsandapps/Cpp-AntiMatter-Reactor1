#include <iostream>
#include <string>

void spacer();
void conditionals111();
void conditionals222();
void conditionals333();


int main() {

    // conditionals
    conditionals111();

    conditionals222();

    conditionals333();


    spacer();
    std::cin.get();
    return 0;
}









void conditionals111() {

    std::cout << "example111:" << std::endl;
    std::cout << "input and integer: " << std::endl;

    int xxx;
    std::cin >> xxx;

    if (xxx > 10) {
        std::cout << "inputted number is larger than 10" << std::endl;
    }
    else {
        std::cout << "inputted number is NOT arger than 10" << std::endl;
    }

}







void conditionals222() {

    std::cout << "example222:" << std::endl;

    std::cout << "input and integer: " << std::endl;

    int xxx;
    std::cin >> xxx;

    if (xxx > 100) {
        std::cout << "inputted number is larger than 10" << std::endl;
    }
    else {
        if (xxx > 50) {
            std::cout << "inputted number is NOT greater than 100" << std::endl;
        }
        else {
            std::cout << "your number is not greater than 50" << std::endl;
        }
    }
}








void conditionals333() {

    std::cout << "example333:" << std::endl;

    std::cout << "input and integer: " << std::endl;

    int xxx;
    std::cin >> xxx;

    if (xxx > 100) {
        std::cout << "inputted number is larger than 10" << std::endl;
    }
    else if (xxx > 50) {
        std::cout << "inputted number is NOT greater than 100" << std::endl;
    }
    else {
        std::cout << "your number is not greater than 50" << std::endl;
    }


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