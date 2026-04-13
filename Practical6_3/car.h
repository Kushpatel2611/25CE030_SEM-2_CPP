#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

class fuel
{
protected:
    string type;

public:
    fuel();
};

class brand
{
protected:
    int model;
    string brandname;

public:
    brand();
};

class car : public fuel, public brand
{
public:
    void display();
};

#endif