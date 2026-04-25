#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

using namespace std;

class BankAccount {
private:
    double balance;
    static string logs[20];
    static int logCount;

public:
    BankAccount(double initialBalance);
    void addLog(string message);
    void deposit(double amount);
    void withdraw(double amount);
    void processTransaction(char type, double amount);
    void initiateSession(char type, double amount);
    void displayLogs();
};

#endif