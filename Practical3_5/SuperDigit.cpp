#include "SuperDigit.h"

long long SuperDigit::calculateInitialSum(string n) {
    long long sum = 0;
    for (int i = 0; i < n.length(); i++) {
        sum += (n[i] - '0');
    }
    return sum;
}

long long SuperDigit::sumOfDigits(long long n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}

long long SuperDigit::compute(long long n) {
    if (n < 10) {
        return n;
    }
    return compute(sumOfDigits(n));
}