#include <iostream>
#include "Grading.h"
using namespace std;

void Undergraduate::input() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter marks: ";
    cin >> marks;
}

void Undergraduate::computeGrade() {
    if (marks >= 75) grade = 'A';
    else if (marks >= 60) grade = 'B';
    else if (marks >= 50) grade = 'C';
    else grade = 'F';
}

void Undergraduate::display() {
    cout << name << " (UG) - Marks: " << marks << " Grade: " << grade << endl;
}

void Postgraduate::input() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter marks: ";
    cin >> marks;
}

void Postgraduate::computeGrade() {
    if (marks >= 80) grade = 'A';
    else if (marks >= 65) grade = 'B';
    else if (marks >= 55) grade = 'C';
    else grade = 'F';
}

void Postgraduate::display() {
    cout << name << " (PG) - Marks: " << marks << " Grade: " << grade << endl;
}