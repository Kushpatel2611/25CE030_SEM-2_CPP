#ifndef STUDENTS_H
#define STUDENTS_H

#include <string>

class Students 
{
private:
    int rollnumber;
    std::string studentname;
    float marks1;
    float marks2;
    float marks3;

public:
    Students(int r = 999, std::string n = "xyz", float m1 = 70, float m2 = 60, float m3 = 50);

    float average();
    void display();

    int getRoll();
};

#endif
