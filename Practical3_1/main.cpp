#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

int main() {
    Employee* head = nullptr;
    int choice;

    do {
        cout << "\nMenu\n";
        cout << "1. Add New Employee Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Exit Program\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int constructorChoice;
                cout << "\n1. Default Constructor\n";
                cout << "2. Parameterized Constructor\n";
                cout << "Choice: ";
                cin >> constructorChoice;

                Employee* newNode = nullptr;

                if (constructorChoice == 1) {
                    newNode = new Employee();
                    newNode->inputData();
                }
                else {
                    string name;
                    double salary, bonus;
                    cout << "Enter Employee Name: ";
                    cin >> ws;
                    getline(cin, name);
                    cout << "Enter Basic Salary: $";
                    cin >> salary;
                    cout << "Enter Custom Bonus: $";
                    cin >> bonus;

                    newNode = new Employee(name, salary, bonus);
                }

                newNode->next = head;
                head = newNode;

                cout << "Employee added.\n";
                break;
            }
            case 2: {
                cout << "\nEmployee Records:\n";

                if (head == nullptr) {
                    cout << "The list is empty.\n";
                } else {
                    Employee* temp = head;

                    while (temp != nullptr) {
                        temp->displayData();
                        temp = temp->next;
                    }
                }
                break;
            }
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 3);

    Employee* current = head;
    while (current != nullptr) {
        Employee* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}
