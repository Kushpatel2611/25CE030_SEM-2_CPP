#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
    Complex c1, c2, result;
    int choice;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "\nEnter second complex number:\n";
    c2.input();

    cout << "\nChoose Operation:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        result = c1 + c2;
        cout << "\nResult (Addition): ";
        result.display();
    }
    else if (choice == 2) {
        result = c1 - c2;
        cout << "\nResult (Subtraction): ";
        result.display();
    }
    else {
        cout << "Invalid choice!";
    }

    return 0;
}