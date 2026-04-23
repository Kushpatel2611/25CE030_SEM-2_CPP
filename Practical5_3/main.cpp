#include <iostream>
#include "Inventory.h"

using namespace std;

int main() {
    Inventory myInventory("inventory.txt");
    int choice;

    do {
        cout << "\n1. Add Item\n2. View All Items\n3. Search Item\n4. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1: myInventory.addItem(); break;
            case 2: myInventory.viewAll(); break;
            case 3: myInventory.searchItem(); break;
            case 4: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}