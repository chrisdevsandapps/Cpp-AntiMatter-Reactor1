



#include <iostream>
#include <unistd.h>
using namespace std;


int main() {


    string fruits[2][3] = {
        {"apple", "watermelon", "orange"},
        {"mangoe", "strawberry", "blueberry"}
    };

    int sizeofX = sizeof(fruits) / sizeof(fruits[0]);
    cout << "x: " << sizeofX << endl;

    int sizeofY = sizeof(fruits[0]) / sizeof(string);
    cout << "y: " << sizeofY << endl;

    for (int x = 0; x < sizeofX; x++) {
        for (int y = 0; y < sizeofY; y++) {
            cout << "item: " << fruits[x][y] << "\t\t" << flush;
        }
        cout << endl;
    }






// size of array



    int arrayX[] = {11,33,55,77,99,88,66,44,22};

    int arraySize = sizeof(arrayX) / sizeof(int);

    cout << arraySize << endl;



    int arraySize2 = sizeof(arrayX) / sizeof(arrayX[0]);

    cout << arraySize2 << endl;


    return 0;
}


