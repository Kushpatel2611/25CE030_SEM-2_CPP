#ifndef GRADING_H
#define GRADING_H

#include <string>
using namespace std;

class Grading {
protected:
    float marks;
    string name;

public:
    virtual void input() = 0;
    virtual void computeGrade() = 0;
    virtual void display() = 0;
    virtual ~Grading() {}
};

class Undergraduate : public Grading {
private:
    char grade;
public:
    void input();
    void computeGrade();
    void display();
};

class Postgraduate : public Grading {
private:
    char grade;
public:
    void input();
    void computeGrade();
    void display();
};

#endif