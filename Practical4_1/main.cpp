#include <iostream>
#include "DynamicArray.h"

int main() {
    DynamicArray arr;
    int choice, value, pos;

    while (true) {
        std::cout << "Enter operation (1=Insert, 2=Delete, 3=Display, 0=Exit): ";
        if (!(std::cin >> choice)) break;
        
        if (choice == 0) break;

        if (choice == 1) {
            std::cout << "Enter value to insert: ";
            std::cin >> value;
            arr.insert(value);
        } else if (choice == 2) {
            std::cout << "Enter position to delete (0-indexed): ";
            std::cin >> pos;
            arr.deleteAt(pos);
        } else if (choice == 3) {
            arr.display();
        } else {
            std::cout << "Invalid operation" << std::endl;
        }
    }
    return 0;
}