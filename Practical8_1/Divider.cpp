#include "Divider.h"
#include <iostream>
#include <limits>
#include <stdexcept>

void Divider::processDivision() {
    int num, den;

    std::cout << "Enter numerator and denominator: ";

    try {
        if (!(std::cin >> num)) {
            throw std::runtime_error("Invalid input: Numerator must be an integer.");
        }

        if (!(std::cin >> den)) {
            throw std::runtime_error("Invalid input: Denominator must be an integer.");
        }

        if (den == 0) {
            throw std::runtime_error("Math Error: Cannot divide by zero.");
        }

        std::cout << "Result: " << (num / den) << std::endl;

    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}