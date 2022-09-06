
// functions


#include <iostream>
#include <string>

void spacer();
int add(int, int);
int add(int, int, int);



int main() {

    std::cout << "add result: " << add(888, 999) << std::endl;

    std::cout << "add result2: " << add(10, 20, 30) << std::endl;




    spacer();
    std::cin.get();
    return 0;
}


int add(int xxx, int yyy) {
    return xxx + yyy;
}

int add(int xxx, int yyy, int zzz) {
    return xxx + yyy + zzz;
}





void spacer() {
    std::cout << "\n\n" << std::endl;

    std::cout << "############################################" << std::endl;
    std::cout << "############################################" << std::endl;
    std::cout << "############################################" << std::endl;
    std::cout << "############################################" << std::endl;
    std::cout << "############################################" << std::endl;

    std::cout << "\n\n" << std::endl;

}