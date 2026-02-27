#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    int m1, m2, m3;
    float average;
    char grade;

    // Validate marks (0–100 only)
    int validateMarks(int marks)
    {
        if (marks >= 0 && marks <= 100)
            return marks;
        else
            return 0;
    }

    void calculateAverage()
    {
        average = (m1 + m2 + m3) / 3.0;
    }

    void calculateGrade()
    {
        if (average >= 90)
            grade = 'A';
        else if (average >= 75)
            grade = 'B';
        else if (average >= 60)
            grade = 'C';
        else if (average >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

public:

    // 🔹 Default Constructor
    Student()
    {
        rollNo = 0;
        name = "Test Student";
        m1 = 50;
        m2 = 50;
        m3 = 50;

        calculateAverage();
        calculateGrade();
    }

    // 🔹 Parameterized Constructor
    Student(int r, string n, int a, int b, int c)
    {
        rollNo = r;
        name = n;
        m1 = validateMarks(a);
        m2 = validateMarks(b);
        m3 = validateMarks(c);

        calculateAverage();
        calculateGrade();
    }

    float getAverage() const
    {
        return average;
    }

    void display() const
    {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << m1 << ", " << m2 << ", " << m3;
        cout << "\nAverage: " << average;
        cout << "\nGrade: " << grade << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student students[100];

    // First student using default constructor
    students[0] = Student();

    // Remaining students using user input
    for (int i = 1; i < n; i++)
    {
        int roll;
        string name;
        int a, b, c;

        cout << "\nEnter details for Student " << i + 1 << endl;

        cout << "Roll No: ";
        cin >> roll;
        cin.ignore();

        cout << "Name: ";
        getline(cin, name);

        cout << "Marks 1: ";
        cin >> a;

        cout << "Marks 2: ";
        cin >> b;

        cout << "Marks 3: ";
        cin >> c;

        students[i] = Student(roll, name, a, b, c);
    }

    cout << "\n----- Student Records -----\n";

    float highest = students[0].getAverage();
    int topIndex = 0;

    for (int i = 0; i < n; i++)
    {
        students[i].display();

        if (students[i].getAverage() > highest)
        {
            highest = students[i].getAverage();
            topIndex = i;
        }
    }

    cout << "\nStudent with Highest Average:\n";
    students[topIndex].display();

    return 0;
}
