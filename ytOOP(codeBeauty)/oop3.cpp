
// abstraction
// timeline: https://youtu.be/wN0x9eZLix4?t=2615

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class AbstractEmployee {
    virtual void askForPromotion() = 0;
};

class Employee : AbstractEmployee {
private:
    string m_sName;
    string m_sCompany;
    int m_iAge;
    int m_iYrsInSrvc;

public:
    Employee(string name, string company, int age, int yrsInSrvc) {
        m_sName = name;
        m_sCompany = company;
        // m_iAge = age;
        this->filterAge(age);
        m_iYrsInSrvc = yrsInSrvc;

    }

    string getName() { return m_sName; }
    void setName(string name) { m_sName = name; }

    string getCompany() { return m_sCompany; }
    void setCompany(string company) { m_sCompany = company; }

    int getAge() { return m_iAge; }
    void setAge(int age) {
        this->filterAge(age);
    }

    int getYrsInSrvc() { return m_iYrsInSrvc; }
    void setYrsInSrvc(int yrsInSrvc) { m_iYrsInSrvc = yrsInSrvc; }

    void IntroduceYourself() {
        cout << "\nIntroduceYourself():" << endl;
        cout << "Name: \t\t" << m_sName << endl;
        cout << "Company: \t" << m_sCompany << endl;
        cout << "Age: \t\t" << m_iAge << endl;
        cout << "YrsInService: \t" << m_iYrsInSrvc << endl;
    }

    void askForPromotion() {
        if (m_iYrsInSrvc >= 5) {
            std::cout << "\naskForPromotion():" << std::endl;
            std::cout << "you are promoted" << std::endl;
        } else {
            std::cout << "\naskForPromotion():" << std::endl;
            std::cout << "sorry, need more yrs of experience" << std::endl;
        }
    }

private:
    void filterAge(int age) {
        if (age >= 18) {
            m_iAge = age; 
        } else {
            m_iAge = -1; 
            std::cout << "\nfilterAge():" << std::endl;
            std::cout << "please enter only 18 and above" << std::endl;
        }
    }

};



int main() {

    Employee e1 = Employee("chris", "dell", 18, 3);
    e1.IntroduceYourself();
    e1.askForPromotion();



    return 0;

}







