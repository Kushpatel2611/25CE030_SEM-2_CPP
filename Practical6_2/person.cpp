#include "person.h"

person::person()
{
    cout << "enter your name:";
    cin >> name;

    cout << "enter your age:";
    cin >> age;
}

void person::display()
{
    cout << name << endl << age << endl;
}

employee::employee()
{
    cout << "enter your id:";
    cin >> id;
}

int employee::metch()
{
    return id;
}

void employee::display()
{
    person::display();
    cout << id << endl;
}

manager::manager()
{
    cout << "enter department:";
    cin >> dep;
}

void manager::display()
{
    employee::display();
    cout << dep << endl;
}