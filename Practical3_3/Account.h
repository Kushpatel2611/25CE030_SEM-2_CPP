#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

class Account {
private:
    int accountNumber;
    std::string holderName;
    double balance;
    int transactionCount;

    static int totalAccounts;
    static const double MIN_BALANCE;

public:
    Account(int accNum, std::string name, double initialBalance);
    static int getTotalAccounts();
    bool transfer(Account &recipient, double amount);
    void applyServiceCharge(double charge);
    void displaySummary() const;
};

#endif