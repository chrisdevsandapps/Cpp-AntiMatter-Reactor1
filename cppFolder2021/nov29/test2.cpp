



#include<cstdlib>
#include<iostream>
#include<string>
#include<limits>

int main(int argc, char* argv[]) {

    std::cout << "hello world" << std::endl;

    if (argc != 1) {
        std::cout << "you entered " << argc << " arguments\n";
        for(int i = 0; i < argc; ++i) {
            std::cout << "count " << i << ": " << argv[i] << std::endl;
        }
    }

    return 0;
}



    // if (__cplusplus == 201703L) std::cout << "C++17\n";
    // else if (__cplusplus == 201402L) std::cout << "C++14\n";
    // else if (__cplusplus == 201103L) std::cout << "C++11\n";
    // else if (__cplusplus == 199711L) std::cout << "C++98\n";
    // else std::cout << "pre-standard C++\n";