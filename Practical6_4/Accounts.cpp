#include "Accounts.h"
using namespace std;

BaseAccount::BaseAccount(int accNum, double initialBalance) 
    : accountNumber(accNum), balance(initialBalance) {
    cout << "BaseAccount " << accountNumber << " initialized.\n";
}

BaseAccount::~BaseAccount() {
    cout << "BaseAccount " << accountNumber << " destroyed.\n";
}

void BaseAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Deposited: " << amount << " | Balance: " << balance << endl;
    }
}

void BaseAccount::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
        cout << "Withdrew: " << amount << " | Balance: " << balance << endl;
    } else {
        cout << "Insufficient funds!\n";
    }
}

void BaseAccount::displayDetails() const {
    cout << "Acc No: " << accountNumber << " | Balance: " << balance;
}

SavingsAccount::SavingsAccount(int accNum, double initialBalance, double rate) 
    : BaseAccount(accNum, initialBalance), interestRate(rate) {
    cout << "Savings Account created.\n";
}

SavingsAccount::~SavingsAccount() {
    cout << "Savings Account destroyed.\n";
}

void SavingsAccount::displayDetails() const {
    BaseAccount::displayDetails();
    cout << " | Interest Rate: " << interestRate << "%" << endl;
}

CurrentAccount::CurrentAccount(int accNum, double initialBalance, double limit) 
    : BaseAccount(accNum, initialBalance), overdraftLimit(limit) {
    cout << "Current Account created.\n";
}

CurrentAccount::~CurrentAccount() {
    cout << "Current Account destroyed.\n";
}

void CurrentAccount::withdraw(double amount) {
    if (amount <= (balance + overdraftLimit)) {
        balance -= amount;
        cout << "Withdrew (Current): " << amount << " | Balance: " << balance << endl;
    } else {
        cout << "Overdraft limit exceeded!\n";
    }
}

void CurrentAccount::displayDetails() const {
    BaseAccount::displayDetails();
    cout << " | Overdraft Limit: " << overdraftLimit << endl;
}