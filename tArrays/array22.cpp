



#include <iostream>
#include <unistd.h>
using namespace std;


int main() {

    // int arrayx[3];

    // arrayx[0] = 897349374;
    // arrayx[1] = 273649233;
    // arrayx[2] = 196809435;

    // cout << "0: " << arrayx[0] << endl;
    // cout << "1: " << arrayx[1] << endl;
    // cout << "2: " << arrayx[2] << endl;


    // int arrayx[3] = {897349374, 273649233, 196809435};

    // cout << "0: " << arrayx[0] << endl;
    // cout << "1: " << arrayx[1] << endl;
    // cout << "2: " << arrayx[2] << endl;







    // int arrayx[7] = {888, 999, 777, 555, 333, 222, 111};


    // int arrSize = sizeof(arrayx) / sizeof(arrayx[0]);
    // cout << "the size is: " << arrSize << endl;


    // for (int i = 0; i < arrSize; i++) {
    //     cout << "array " << i << ": " << arrayx[i] << endl;
    //     sleep(1);
    // }






    // int arrayx[10] = { };

    // for (int i = 0; i < 10; i++) {
    //     arrayx[i] = i + 100;
    //     cout << "array " << i << ": " << arrayx[i] << endl;
    //     sleep(1);
    // }

    // // displaying individual array content:
    // int arrSize = sizeof(arrayx) / sizeof(arrayx[0]);
    // cout << "the array size is: " << arrSize << endl;

    // for (int i = 0; i < arrSize; i++) {
    //     cout << "array " << i << ": " << arrayx[i] << endl;
    // }






    string names[] = {"apple", "orange", "watermelon", "strawberry", "grapes", "melon"};

    int arrSize = sizeof(names) / sizeof(names[0]);
    cout << "the array size is: " << arrSize << endl;

    for (int i = 0; i < arrSize; i++) {
        cout <<"element at index " << i << ": " << names[i] << endl;
    }




    return 0;
}




    // for (int i = 0; i < 10; i++) {
    //     cout << "count: " << i << endl;
    //     sleep(1);
    // }