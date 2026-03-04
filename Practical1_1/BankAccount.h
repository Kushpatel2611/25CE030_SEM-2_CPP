#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BankAccount {
private:
    string walletID;
    string userName;
    double balance;
    bool isFrozen;
    vector<string> history;

    void addTransaction(string record);

public:
    BankAccount(string id, string name, double initialBalance);
    void loadMoney(double amount);
    bool transferMoney(BankAccount &receiver, double amount);
    void displayDetails() const;
    void toggleFreeze();
    void displayHistory() const;
};

#endif