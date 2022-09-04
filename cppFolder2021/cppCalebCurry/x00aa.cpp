
// g++ x00aa.cpp chrisUtilities.cpp -o hahaha -std=c++11

// INTRO

#include <iostream>
#include <string>
#include "chrisUtilities.h"

void one();
void variables();
void input();

int main() {

    using std::cout;

    cout << "hello world";

    spacer(2);

    one();

    spacer(2);

    variables();

    spacer(2);

    input();

    spacer(2);
    std::cin.get();
    return 0;
}


void one() {
    using std::cout;
    cout << "wazzup!!!";
}



void variables() {

    using std::cout;

    int slices;
    slices = 5 + 1;
    cout << "slices:\t\t" << slices << std::endl;
    cout << " " << std::endl;



    int children;
    children = slices;
    slices = 1000;
    cout << "children:\t" << children << std::endl;
    cout << "slices:\t\t" << slices << std::endl;

}





void input() {
    using std::cout;
    using std::cin;
    using std::endl;

    std::string name;

    cout << "enter your name:\t";

    cin >> name;

    cout << "ohh, hello there " << name << "! wazzup!!" << endl;


}



/*

compiler sa windows: mingW

compiler sa mac: g++


return 0; ===> ibig sabihin, walang error, everything worked


#include <iostream>  ====> preprocessor directive


preprocessor - is something has to happen before all the code is compiled

bale, ilalagay nya yung content ng iostream, at ilalagay sa current file(ex: chris.cpp)


"std::cout << ...;"
std ===> namespace

namespace is a grouping of code (https://youtu.be/9F3wgbaoTxs?t=102)

para di magconflict sa naming ng functions/methods

example:
myNameSpaceOne::myMathUtilities();
myNameSpaceTwo::myMathUtilities();


using namespace std;    versus    using std::cout;
- https://youtu.be/0UdALJ348zc?t=91


cout << ...;
cin >> ...;
<<, >>    ===> operator



*/