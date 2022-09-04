
// polymorphism
// timeline: https://youtu.be/wN0x9eZLix4?t=4621

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
        std::cout << "class created" << std::endl;

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

    void work() {
        std::cout << "\nwork():" << std::endl;
        std::cout << getName() << " is working" << std::endl;
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

class Developer : public Employee {
public:
    string m_sLanguageSkill;

    Developer(string name, string company, int age, int yrsInSrvc, string language)
        : Employee(name, company, age, yrsInSrvc) {
        m_sLanguageSkill = language;
    }

    void fixBug() {
        std::cout << "\nfixBug():" << std::endl;
        std::cout << getName() << " is fixing bug using "
            << m_sLanguageSkill << std::endl;
    }

    void work() {
        std::cout << "\nwork():" << std::endl;
        std::cout << getName() << " is coding in " << m_sLanguageSkill << std::endl;
    }

};

class Teacher : public Employee {
public:
    string m_sSubjecSkill;

    Teacher(string name, string company, int age, int yrsInSrvc, string subjecSkill) 
        : Employee(name, company, age, yrsInSrvc) {
        m_sSubjecSkill = subjecSkill;
    }

    void prepareLesson() {
        std::cout << "\nprepareLesson():" << std::endl;
        std::cout << getName() << " is preparing lesson in "
            << m_sSubjecSkill << std::endl;
    }

    void work() {
        std::cout << "\nwork():" << std::endl;
        std::cout << getName() << " is teaching in " << m_sSubjecSkill << std::endl;
    }

};


int main() {

    Developer d1 = Developer("chris", "tesla", 18, 5, "C++");
    d1.IntroduceYourself();
    d1.askForPromotion();
    d1.fixBug();
    d1.work();

    cout << " \n \n" << endl;

    Teacher t1 = Teacher("jen", "laSalle", 17, 3, "Math");
    t1.IntroduceYourself();
    t1.askForPromotion();
    t1.prepareLesson();
    t1.work();





    return 0;

}






    // Employee* pD1 = &d1;
    // Employee* pT1 = &t1;

    // pD1->work();
    // pT1->work();

