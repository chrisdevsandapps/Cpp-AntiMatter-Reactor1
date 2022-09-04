
// g++ x82Struct.cpp chrisUtilities.cpp -o hahaha -std=c++11

#include <iostream>
#include "chrisUtilities.h"

struct User {
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

    // instance of the struct
    User user111;
    user111.firstName = "bill";
    user111.lastName = "gates";
    user111.setStatus("billionaire");

    std::cout << "first name: " << user111.firstName << std::endl;
    std::cout << "status: " << user111.getStatus() << std::endl;

    spacer(2);

    User user222;
    user222.firstName = "elon";
    // user222.setStatus("trillionaire");
    std::cout << "first name: " << user222.firstName << std::endl;
    std::cout << "status: " << user222.getStatus() << std::endl;

    spacer();

    std::cin.get();
    return 0;
}





/*
structs, by default are public
class, by default are private



in c# and c++, structs are value types, class are reference types
difference lang ay yung access modifiers

convention sa gamit ng structs sa c++
- data structs
- variables lang usually yung laman ng structs,
- di masyado ginagamit yung methods sa loob ng structs


https://stackoverflow.com/questions/2732978/c-how-to-declare-a-struct-in-a-header-file

*/