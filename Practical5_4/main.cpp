#include "StudentFormat.h"
#include <iostream>

using namespace std;

int main() {
    
    StudentFormat students[] = {
        StudentFormat("Kush", 88.5, 5000.00),
        StudentFormat("Zeel", 92.0, 4500.50),
        StudentFormat("Jaimin", 76.458, 6000.00)
    };

    students[0].displayHeader();

    for (int i = 0; i < 3; i++) {
        students[i].displayData();
    }

    return 0;
}