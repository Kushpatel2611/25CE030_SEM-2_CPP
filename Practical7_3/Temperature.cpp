#include "Temperature.h"

Celsius::Celsius(float t) {
    temp = t;
}

float Celsius::getTemp() {
    return temp;
}

void Celsius::input() {
    cout << "Enter temperature in Celsius: ";
    cin >> temp;
}

void Celsius::display() {
    cout << temp << " °C";
}

Fahrenheit::Fahrenheit(float t) {
    temp = t;
}

float Fahrenheit::getTemp() {
    return temp;
}

void Fahrenheit::input() {
    cout << "Enter temperature in Fahrenheit: ";
    cin >> temp;
}

void Fahrenheit::display() {
    cout << temp << " °F";
}

Celsius::operator Fahrenheit() {
    return Fahrenheit((temp * 9/5) + 32);
}

Fahrenheit::operator Celsius() {
    return Celsius((temp - 32) * 5/9);
}

bool Celsius::operator==(Celsius c) {
    return temp == c.temp;
}

bool Fahrenheit::operator==(Fahrenheit f) {
    return temp == f.temp;
}