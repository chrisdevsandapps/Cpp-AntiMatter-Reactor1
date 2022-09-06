
// g++ x50aa.cpp chrisUtilities.cpp -o hahaha -std=c++11

// 50. Intro to Vectors

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include "chrisUtilities.h"

void vector1();

int main() {
    using std::cout;
    cout << "hello world\n";

    vector1();

    spacer(2);
    std::cin.get();
    return 0;
}




void vector1() {

    using std::cout;

    std::vector<int> xxx = {89, 33, 96};

    xxx.push_back(1);
    xxx.push_back(100);

    cout << "size: " << xxx.size() << std::endl;

    cout << "last item: " << xxx[xxx.size() - 1] << std::endl;
    

    xxx.pop_back();

    cout << "size: " << xxx.size() << std::endl;

    cout << "last item: " << xxx[xxx.size() - 1] << std::endl;

}







/*



*/