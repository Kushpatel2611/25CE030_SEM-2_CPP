#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <vector>

class Calculator {
public:
    static long long calculateIterative(const std::vector<int>& arr);
    static long long calculateRecursive(const std::vector<int>& arr, int n);
};

#endif