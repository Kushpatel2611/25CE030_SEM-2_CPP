#ifndef ACCOUNTS_H
#define ACCOUNTS_H

#include <iostream>
#include <string>

class BaseAccount {
protected:
    int accountNumber;
    double balance;

public:
    BaseAccount(int accNum, double initialBalance);
    virtual ~BaseAccount();
    virtual void deposit(double amount);
    virtual void withdraw(double amount);
    virtual void displayDetails() const;
};

class SavingsAccount : public BaseAccount {
private:
    double interestRate;

public:
    SavingsAccount(int accNum, double initialBalance, double rate);
    ~SavingsAccount();
    void displayDetails() const override;
};

class CurrentAccount : public BaseAccount {
private:
    double overdraftLimit;

public:
    CurrentAccount(int accNum, double initialBalance, double limit);
    ~CurrentAccount();
    void withdraw(double amount) override;
    void displayDetails() const override;
};

#endif