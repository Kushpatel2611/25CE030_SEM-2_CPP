#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(float r, float i) {
    real = r;
    imag = i;
}

Complex Complex::operator+(const Complex& c) {
    return Complex(real + c.real, imag + c.imag);
}

Complex Complex::operator-(const Complex& c) {
    return Complex(real - c.real, imag - c.imag);
}

void Complex::input() {
    cout << "Enter real part: ";
    cin >> real;
    cout << "Enter imaginary part: ";
    cin >> imag;
}

void Complex::display() {
    cout << real;
    if (imag >= 0)
        cout << " + " << imag << "i";
    else
        cout << " - " << -imag << "i";
}