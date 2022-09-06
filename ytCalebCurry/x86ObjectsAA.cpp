
// g++ x86ObjectsAA.cpp chrisUtilities.cpp -o hahaha -std=c++11

// WORKING WITH OBJECTS

#include <iostream>
#include <vector>
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

    spacer(2);

    std::vector<User> users;
    users.push_back(user111);

    std::cout << "using <vector>: " << std::endl;
    std::cout << "first name:" << users[0].firstName << std::endl;


    // using constructor:
    users.push_back(User());





    spacer();
    std::cin.get();
    return 0;
}





/*


*/