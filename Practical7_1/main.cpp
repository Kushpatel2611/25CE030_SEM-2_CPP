#include <iostream>
#include "Calculator.h"
using namespace std;

int main() {
    Calculator calc;
    int choice;

    cout << "Select Addition Type:\n";
    cout << "1. Integer + Integer\n";
    cout << "2. Float + Float\n";
    cout << "3. Integer + Float\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        cout << "Result = " << calc.add(a, b);
    }
    else if (choice == 2) {
        float a, b;
        cout << "Enter two float numbers: ";
        cin >> a >> b;
        cout << "Result = " << calc.add(a, b);
    }
    else if (choice == 3) {
        int a;
        float b;
        cout << "Enter integer: ";
        cin >> a;
        cout << "Enter float: ";
        cin >> b;
        cout << "Result = " << calc.add(a, b);
    }
    else {
        cout << "Invalid choice!";
    }

    return 0;
}