
// g++ x83Class.cpp chrisUtilities.cpp -o hahaha -std=c++11

#include <iostream>
#include "chrisUtilities.h"


class User {

    public:
    std::string firstName;
    std::string lastName;
    std::string getStatus() {
        return status;
    }
    void setStatus(std::string xxx) {
        status = xxx;
    }


    private:
    std::string status = "Gold";
};



int main() {

    // instance of the class
    User user111;
    user111.firstName = "bill";
    user111.lastName = "gates";
    user111.setStatus("billionaire");

    User user222;
    user222.firstName = "elon";
    // user222.setStatus("trillionaire");





    std::cout << "first name: " << user111.firstName << std::endl;
    std::cout << "status: " << user111.getStatus() << std::endl;

    spacer(2);

    std::cout << "first name: " << user222.firstName << std::endl;
    std::cout << "status: " << user222.getStatus() << std::endl;



    spacer();
    std::cin.get();
    return 0;
}





/*

https://stackoverflow.com/questions/9579930/separating-class-code-into-a-header-and-cpp-file

*/