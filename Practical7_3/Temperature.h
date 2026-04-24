#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <iostream>
using namespace std;

class Fahrenheit;

class Celsius {
private:
    float temp;
public:
    Celsius(float t = 0);
    float getTemp();

    void input();
    void display();

    operator Fahrenheit();
    bool operator==(Celsius c);
};

class Fahrenheit {
private:
    float temp;
public:
    Fahrenheit(float t = 0);
    float getTemp();

    void input();
    void display();

    operator Celsius();
    bool operator==(Fahrenheit f);
};

#endif