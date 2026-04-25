#ifndef NEGATIVENUMBEREXCEPTION_H
#define NEGATIVENUMBEREXCEPTION_H

#include <exception>
#include <string>

using namespace std;

class NegativeNumberException : public exception {
private:
    string message;
public:
    NegativeNumberException(double num) {
        message = "Error: " + to_string(num) + " is negative. Square root of negative numbers is not defined in real numbers.";
    }

    virtual const char* what() const throw() {
        return message.c_str();
    }
};

#endif