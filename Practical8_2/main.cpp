#include "MathProcessor.h"
#include "NegativeNumberException.h"
#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

void MathProcessor::calculateSquareRoot() {
    double num;
    cout << "Enter a number to find its square root: ";

    try {
        if (!(cin >> num)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            throw runtime_error("Invalid input: Please enter a numeric value.");
        }

        if (num < 0) {
            throw NegativeNumberException(num);
        }

        cout << "Square root of " << num << " is: " << sqrt(num) << endl;

    } catch (const NegativeNumberException& e) {
        cerr << e.what() << endl;
    } catch (const runtime_error& e) {
        cerr << e.what() << endl;
    }
}