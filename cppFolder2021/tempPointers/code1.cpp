
// g++-11 -std=c++20 -Wall -Wextra -pedantic code1.cpp -o hahaha

#include <iostream>

#include <vector>

#define LOG(x) std::cout << x << std::endl;

int main() {

    std::vector<int> myVector{111, 222, 333, 444, 555, 666};

    for(auto &item : myVector) {
        std::cout << item << std::endl;
    }


    

    int *aaa = new int[10];

    // int* ppp = &aaa;

    std::cout << "aaa1: " << aaa << std::endl;
    std::cout << "aaa2: " << &aaa << std::endl;

    // std::cout << "ppp1: " << *ppp << std::endl;
    // std::cout << "ppp2: " << ppp << std::endl;




    // std::cout << "ppp3: " << *ppp + 10 << std::endl;

    // int yyy = *ppp + 10;

    // std::cout << "yyy1: " << yyy << std::endl;

    // aaa = aaa + 1;

    // std::cout << "aaa2: " << aaa << std::endl;

    // int zzz = *ppp + *ppp;

    // std::cout << "ppp1: " << ppp << std::endl;
    // std::cout << "yyy2: " << yyy << std::endl;
    // std::cout << "zzz1: " << zzz << std::endl;
   
}




