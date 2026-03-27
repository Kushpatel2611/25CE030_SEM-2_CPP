#include "Calculator.h"

long long Calculator::calculateIterative(const std::vector<int>& arr) {
    long long total = 0;
    for (int i = 0; i < arr.size(); i++) {
        total += arr[i];
    }
    return total;
}

long long Calculator::calculateRecursive(const std::vector<int>& arr, int n) {
    if (n <= 0) return 0;
    return arr[n - 1] + calculateRecursive(arr, n - 1);
}