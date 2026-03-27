#include "Account.h"
#include <iomanip>

int Account::totalAccounts = 0;
const double Account::MIN_BALANCE = 500.00;

Account::Account(int accNum, std::string name, double initialBalance) {
    accountNumber = accNum;
    holderName = name;
    balance = initialBalance;
    transactionCount = 0;
    totalAccounts++;
}

int Account::getTotalAccounts() {
    return totalAccounts;
}

bool Account::transfer(Account &recipient, double amount) {
    if (amount <= 0) {
        std::cout << "Invalid amount!" << std::endl;
        return false;
    }
    if (balance - amount < MIN_BALANCE) {
        std::cout << "Transfer failed! Insufficient funds (Min Balance: " << MIN_BALANCE << ")" << std::endl;
        return false;
    }

    balance -= amount;
    recipient.balance += amount;
    
    transactionCount++;
    recipient.transactionCount++;
    
    std::cout << "Transfer Success: " << amount << " sent to " << recipient.holderName << std::endl;
    return true;
}

void Account::applyServiceCharge(double charge) {
    if (balance >= charge) {
        balance -= charge;
        transactionCount++;
        std::cout << "Service charge of " << charge << " applied to " << holderName << std::endl;
    }
}

void Account::displaySummary() const {
   
    std::cout << "Acc No: " << accountNumber << "  Name: " << holderName << std::endl;
    std::cout << "Balance: " << std::fixed << std::setprecision(2) << balance << std::endl;
    std::cout << "Total Transactions: " << transactionCount << std::endl;
}