




#include <iostream>
#include <unistd.h>
using namespace std;
void showMenu();
int processInput();
void processSelection(int);

int main() {
    showMenu();
    int selectInput = processInput();
    processSelection(selectInput);
    return 0;
}

void showMenu() {
    cout << "1. Search" << endl;
    cout << "2. View Record" << endl;
    cout << "3. Quit" << endl;
}

int processInput() {
    cout << "Enter Selection: " << endl;  
    int input;
    cin >> input;
    return input;
}

void processSelection(int input) {
    switch (input) {
        case 1: 
            cout << "Searching... " << endl;
            break;
        case 2:
            cout << "Viewing... " << endl;
            break;
        case 3:
            cout << "Quitting... " << endl;
            break;
        default:
            cout << "Please select an item from the menu." << endl;
    }
}



