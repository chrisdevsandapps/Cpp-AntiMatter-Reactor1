// pointer practice


#include <iostream>

using std::cout;
using std::endl;
using std::string;


int main() {

    int aaa = 888;


    void* pointer1 = &aaa;

    cout << pointer1 << endl;

    std::cin.get();

    return 0;

}