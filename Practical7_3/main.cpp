#include <iostream>
#include <queue>
#include "Temperature.h"
using namespace std;

int main() {
    int choice;

    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Compare Temperatures\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        Celsius c;
        c.input();
        Fahrenheit f = c;
        cout << "Converted: ";
        f.display();

        queue<Fahrenheit> q;
        q.push(f);

        Fahrenheit arr[3];
        arr[0] = f;

        cout << "\nStored in Queue and Array";
    }
    else if (choice == 2) {
        Fahrenheit f;
        f.input();
        Celsius c = f;
        cout << "Converted: ";
        c.display();

        queue<Celsius> q;
        q.push(c);

        Celsius arr[3];
        arr[0] = c;

        cout << "\nStored in Queue and Array";
    }
    else if (choice == 3) {
        Celsius c1, c2;
        cout << "Enter first Celsius:\n";
        c1.input();
        cout << "Enter second Celsius:\n";
        c2.input();

        if (c1 == c2)
            cout << "Temperatures are equal";
        else
            cout << "Temperatures are not equal";
    }
    else {
        cout << "Invalid choice";
    }

    return 0;
}