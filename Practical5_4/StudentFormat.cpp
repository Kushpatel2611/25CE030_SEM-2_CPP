#include "StudentFormat.h"
#include <iostream>
#include <iomanip>

using namespace std;

ostream& currency(ostream& os) {
    return os << "Rs. ";
}

StudentFormat::StudentFormat(string n, double m, double f) 
    : name(n), marks(m), fees(f) {}

void StudentFormat::displayHeader() {
    cout << setfill('=') << setw(50) << "" << endl;
    cout << setfill(' ');
    cout << left << setw(20) << "Name" 
         << setw(15) << "Marks (%)" 
         << "Fees Paid" << endl;
    cout << setfill('-') << setw(50) << "" << endl;
    cout << setfill(' ');
}

void StudentFormat::displayData() {
    cout << left << setw(20) << name 
         << fixed << setprecision(2) << setw(15) << marks 
         << currency << fees << endl;
}