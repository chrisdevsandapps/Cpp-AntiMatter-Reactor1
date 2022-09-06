

//to compile: g++ xx04.cpp topicInput.cpp -o hello.exe

#include <iostream>
#include <string>


void spacer();
void typeCasting111();
void typeCasting222();
void typeCasting333();
void typeCasting444();

int main() {


    typeCasting111();

    typeCasting222();

    typeCasting333();

    typeCasting444();

    spacer();
    std::cin.get();
    return 0;
}







void typeCasting111() {

    // using stoi

    std::string ss1 = "1234";

    std::cout << "ss1: " << ss1 << std::endl;

    int iii1 = stoi(ss1);

    std::cout << "iii1 + 1000: " << iii1 + 1000 << std::endl;
}


void typeCasting222() {

    // basic typecasting
    // short to int

    short xxx = 888;

    int yyy = int(xxx);

    std::cout << "yyy: " << yyy << std::endl;


}






void typeCasting333() {

    // int to float

    int xxx = 777;
    int yyy = 333;

    std::cout << float(xxx) / float(yyy) << std::endl;
}






void typeCasting444() {

    // integer to string

    int xxx = 888;

    std::string yyy = std::to_string(xxx);

    std::cout << "this is a string: " + yyy << std::endl;
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