#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class person
{
    string name;
    int age;

public:
    person();
    virtual void display();
};

class employee : public person
{
    int id;

public:
    employee();
    int metch();
    void display();
};

class manager : public employee
{
    string dep;

public:
    manager();
    void display();
};

#endif