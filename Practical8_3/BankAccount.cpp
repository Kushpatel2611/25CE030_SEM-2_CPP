#include "BankAccount.h"
#include <iostream>
#include <stdexcept>

using namespace std;

string BankAccount::logs[20];
int BankAccount::logCount = 0;

BankAccount::BankAccount(double initialBalance) : balance(initialBalance) {}

void BankAccount::addLog(string message) {
    if (logCount < 20) {
        logs[logCount++] = message;
    }
}

void BankAccount::withdraw(double amount) {
    addLog("Entered withdraw()");
    if (amount > balance) {
        addLog("Exception thrown in withdraw()");
        throw runtime_error("Insufficient funds!");
    }
    balance -= amount;
    addLog("Exiting withdraw() successfully");
}

void BankAccount::deposit(double amount) {
    addLog("Entered deposit()");
    if (amount <= 0) {
        addLog("Exception thrown in deposit()");
        throw runtime_error("Invalid deposit amount!");
    }
    balance += amount;
    addLog("Exiting deposit() successfully");
}

void BankAccount::processTransaction(char type, double amount) {
    addLog("Entered processTransaction()");
    if (type == 'w') {
        withdraw(amount);
    } else {
        deposit(amount);
    }
    addLog("Exiting processTransaction()");
}

void BankAccount::initiateSession(char type, double amount) {
    addLog("Entered initiateSession()");
    processTransaction(type, amount);
    addLog("Exiting initiateSession()");
}

void BankAccount::displayLogs() {
    cout << "\n--- Transaction Flow Log ---" << endl;
    for (int i = 0; i < logCount; i++) {
        cout << i + 1 << ". " << logs[i] << endl;
    }
    cout << "Final Balance: " << balance << endl;
}