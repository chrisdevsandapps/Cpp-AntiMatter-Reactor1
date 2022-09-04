//to compile: g++ xx02.cpp -o hello.exe

#include <iostream>



int main() {
    
    std::cout << "hello world" << std::endl;


    // numerical data types
    short int aaa = 20;
    int bbb = 333;

    std::cout << "short integer byte: " << sizeof(short) << std::endl;
    std::cout << "INT16_MAX: " << INT16_MAX << std::endl;

    std::cout << "integer byte: " << sizeof(int) << std::endl;
    std::cout << "INT32_MAX: " << INT32_MAX << std::endl;


    std::cout << "long integer byte: " << sizeof(long) << std::endl;
    std::cout << "INT64_MAX: " << INT64_MAX << std::endl;




    std::cout << "long long integer byte: " << sizeof(long long) << std::endl;

    signed int ccc = -32111;
    unsigned long ddd = 4294967296;
    std::cout << "ddd: " << ddd << std::endl;


    std::cout << "float: " << sizeof(float) << std::endl;
    std::cout << "double: " << sizeof(double) << std::endl;
    std::cout << "long double: " << sizeof(long double) << std::endl;


    std::cout << "short min: " << SHRT_MIN << std::endl;
    std::cout << "short max: " << SHRT_MAX << std::endl;
    std::cout << "int min: " << INT_MIN << std::endl;
    std::cout << "int max: " << INT_MAX << std::endl;
    std::cout << "unsigned int max: " << UINT_MAX << std::endl;
    std::cout << "unsigned int 16 max: " << UINT16_MAX << std::endl;
    std::cout << "unsigned int 32 max: " << UINT32_MAX << std::endl;
    std::cout << "unsigned int 64 max: " << UINT64_MAX << std::endl;
    std::cout << "unsigned long long max: " << ULLONG_MAX << std::endl;



    // textual data types
    std::cout << "char: " << sizeof(char) << std::endl;
    std::cout << "string: " << sizeof(std::string) << std::endl;



    // boolean
    std::cout << "bool: " << sizeof(bool) << std::endl;

    return 0;
}