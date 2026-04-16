#include <iostream>
#include <string>
#include "SuperDigit.h"

using namespace std;

int main() {
    string n;
    long long k;

    cout << "Enter the number (n): ";
    cin >> n;
    cout << "Enter the repetition factor (k): ";
    cin >> k;

    SuperDigit sd;

    long long firstSum = sd.calculateInitialSum(n);
    long long totalSum = firstSum * k;

    long long result = sd.compute(totalSum);

    cout << "Super Digit: " << result << endl;

    return 0;
}