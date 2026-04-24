#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0);

    Complex operator+(const Complex& c);
    Complex operator-(const Complex& c);

    void input();
    void display();
};

#endif