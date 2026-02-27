#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee() {
    name = "Not Assigned";
    basicSalary = 0.0;
    bonus = 5000.0;
    next = nullptr;
}

Employee::Employee(string empName, double bSalary, double empBonus) {
    name = empName;
    basicSalary = bSalary;
    bonus = empBonus;
    next = nullptr;
}

void Employee::inputData() {
    cout << "Enter Employee Name: ";
    cin >> ws;
    getline(cin, name);
    cout << "Enter Basic Salary: $";
    cin >> basicSalary;
}

void Employee::displayData() {
    cout << "Name: " << name << "\n";
    cout << "Basic Salary: $" << basicSalary << "\n";
    cout << "Bonus: $" << bonus << "\n";
    cout << "Total Salary: $" << computeTotalSalary() << "\n\n";
}
