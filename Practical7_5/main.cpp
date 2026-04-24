#include <iostream>
#include "Grading.h"
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Grading* students[100];

    for (int i = 0; i < n; i++) {
        int choice;
        cout << "\n1. Undergraduate\n2. Postgraduate\nChoose type: ";
        cin >> choice;

        if (choice == 1) {
            students[i] = new Undergraduate();
        }
        else if (choice == 2) {
            students[i] = new Postgraduate();
        }
        else {
            cout << "Invalid choice\n";
            i--;
            continue;
        }

        students[i]->input();
        students[i]->computeGrade();
    }

    cout << "\nStudent Records:\n";
    for (int i = 0; i < n; i++) {
        students[i]->display();
    }

    for (int i = 0; i < n; i++) {
        delete students[i];
    }

    return 0;
}