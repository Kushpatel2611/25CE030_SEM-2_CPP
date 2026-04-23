#include "Accounts.h"
#include <iostream>

using namespace std;

int main() {
    SavingsAccount mySavings(101, 500.0, 3.5);
    mySavings.deposit(200);
    mySavings.displayDetails();

    cout << endl;

    CurrentAccount myCurrent(202, 1000.0, 500.0);
    myCurrent.withdraw(1300);
    myCurrent.displayDetails();

    cout << endl;

    return 0;
}