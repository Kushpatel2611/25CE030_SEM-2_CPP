#include "Students.h"
#include <iostream>

using namespace std;

Students::Students(int r, string n, float m1, float m2, float m3) 
{
    rollnumber = r;
    studentname = n;
    marks1 = m1;
    marks2 = m2;
    marks3 = m3;
}

float Students::average() 
{
    return (marks1 + marks2 + marks3) / 3.0f;
}

void Students::display() 
{
    cout << "\nRoll No: " << rollnumber;
    cout << "\nName: " << studentname;
    cout << "\nMarks: " << marks1 << " " << marks2 << " " << marks3;
    cout << "\nAverage: " << average() << endl;
}

int Students::getRoll() 
{
    return rollnumber;
}
