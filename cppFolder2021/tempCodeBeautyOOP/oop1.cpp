
// constructor
// timeline: https://youtu.be/wN0x9eZLix4?t=1617

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Employee {
public:
    string sName;
    string sCompany;
    int iAge;
    int iYrsInSrvc;

    Employee(string name, string company, int age, int yrsInSrvc) {
        sName = name;
        sCompany = company;
        iAge = age;
        iYrsInSrvc = yrsInSrvc;

    }
    
    void IntroduceYourself() {
        cout << "\nIntroduceYourself()" << endl;
        cout << "Name: \t\t" << sName << endl;
        cout << "Company: \t" << sCompany << endl;
        cout << "Age: \t\t" << iAge << endl;
        cout << "YrsInService: \t" << iYrsInSrvc << endl;
    }

};



int main() {

    Employee e1 = Employee("chris", "dell", 25, 5);
    e1.IntroduceYourself();
    Employee e2 = Employee("jen", "aws", 24, 3);
    e2.IntroduceYourself();

    return 0;

}







