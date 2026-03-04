#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
private:
    std::string name;
    double basicSalary;
    double bonus;

public:
    Employee* next;

    Employee();
    Employee(std::string empName, double bSalary, double empBonus);

    inline double computeTotalSalary() {
        return basicSalary + bonus;
    }

    void inputData();
    void displayData();
};

#endif // EMPLOYEE_H
