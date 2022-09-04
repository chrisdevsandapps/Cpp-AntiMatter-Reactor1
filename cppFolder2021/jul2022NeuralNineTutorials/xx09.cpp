
// loops


#include <iostream>
#include <string>

void spacer();
void whileLoop111();
void doWhileLoop111();
void forLoop111();

int main() {

    whileLoop111();
    spacer();
    doWhileLoop111();
    spacer();
    forLoop111();

    spacer();
    std::cin.get();
    return 0;
}




void whileLoop111() {

    std::cout << "whileLoop111()" << std::endl;

    std::cout << "input an integer number:  " << std::endl;

    int i;
    std::cin >> i;

    std::cout << "\nLooping: \n" << std::endl;


    while (i > 0) {
        std::cout << i-- << std::endl;

    }
    
}







void doWhileLoop111() {

    std::cout << "doWhileLoop111()" << std::endl;

    std::cout << "input an integer number:  " << std::endl;

    int i;
    std::cin >> i;

    std::cout << "\nLooping: \n" << std::endl;

    do {
        std::cout << i-- << std::endl;
    } while (i > 0);


}



void forLoop111() {

    std::cout << "forLoop111()" << std::endl;

    for (int i = 0; i < 10; i++ ) {
        std::cout << "hello" << i << std::endl;
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