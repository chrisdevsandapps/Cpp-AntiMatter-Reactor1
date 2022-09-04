
// g++ x86ObjectsBB.cpp chrisUtilities.cpp -o hahaha -std=c++11

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


int addUserIfItDidNotExists(std::vector<User> &xxx, User yyy) {

     for(int i = 0; i < xxx.size(); i++ ) {

        bool myCondition = (xxx[i].firstName == yyy.firstName) && 
                            (xxx[i].lastName == yyy.lastName);

        //if they match:
        if(myCondition) {
            //if they match, return the index of the user:
            return i;
        }

        // after the loopb and no users matches the data:
        // we use push_back and user to the vector
        xxx.push_back(yyy);


        // for the return, pass in the length of the vector minus 1
        return xxx.size() - 1;
     }
}


int main() {



    User user1, user2, user3;
    user1.firstName = "jody";
    user1.lastName = "foster";

    user2.firstName = "emma";
    user2.lastName = "stone";

    user3.firstName = "jennifer";
    user3.lastName = "lawrence";



    std::vector<User> users;

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User userX;
    userX.firstName = "emma";
    userX.lastName = "stone";


    std::cout << "addUserIfItDidNotExists(users, userX): " 
            << addUserIfItDidNotExists(users, userX) 
            << std::endl;


    std::cout << "size: " << users.size() << std::endl;

    spacer();
    std::cin.get();
    return 0;
}





/*


*/