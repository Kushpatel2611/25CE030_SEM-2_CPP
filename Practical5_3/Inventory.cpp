#include "Inventory.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

Inventory::Inventory(string file) : filename(file) {}

void Inventory::addItem() {
    ofstream file(filename, ios::app);
    if (!file) {
        cerr << "Error opening file!" << endl;
        return;
    }

    string name;
    int qty;
    double price;

    cout << "Enter Item Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Quantity: ";
    cin >> qty;
    cout << "Enter Price: ";
    cin >> price;

    file << name << " " << qty << " " << price << endl;
    file.close();
    cout << "Item added successfully!" << endl;
}

void Inventory::viewAll() {
    ifstream file(filename);
    if (!file) {
        cerr << "No records found." << endl;
        return;
    }

    string name;
    int qty;
    double price;

    cout << "\n--- Current Inventory ---\n";
    cout << left << setw(15) << "Name" << setw(10) << "Qty" << "Price" << endl;
    cout << "-----------------------------------" << endl;

    while (file >> name >> qty >> price) {
        cout << left << setw(15) << name << setw(10) << qty << price << endl;
    }
    file.close();
}

void Inventory::searchItem() {
    ifstream file(filename);
    if (!file) {
        cerr << "No records found." << endl;
        return;
    }

    string searchName, name;
    int qty;
    double price;
    bool found = false;

    cout << "Enter Item Name to Search: ";
    cin.ignore();
    getline(cin, searchName);

    while (file >> name >> qty >> price) {
        if (name == searchName) {
            cout << "\nItem Found:" << endl;
            cout << "Name: " << name << "\nQty: " << qty << "\nPrice: " << price << endl;
            found = true;
            break;
        }
    }

    if (!found) cout << "Item not found in inventory." << endl;
    file.close();
}