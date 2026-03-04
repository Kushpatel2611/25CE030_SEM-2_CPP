#include "BankAccount.h"

using namespace std;

BankAccount::BankAccount(string id, string name, double initialBalance) {
    walletID = id;
    userName = name;
    balance = initialBalance;
    isFrozen = false;
}

void BankAccount::addTransaction(string record) {
    if (history.size() >= 5) {
        history.erase(history.begin());
    }
    history.push_back(record);
}

void BankAccount::loadMoney(double amount) {
    if (isFrozen) {
        cout << "Wallet is frozen. Cannot load money." << endl;
        return;
    }
    double cashback = amount * 0.05;
    balance = balance + amount + cashback;
    addTransaction("Loaded: " + to_string(amount));
    cout << "Success! Added " << amount << " with " << cashback << " cashback." << endl;
}

bool BankAccount::transferMoney(BankAccount &receiver, double amount) {
    if (isFrozen || receiver.isFrozen) {
        cout << "Transfer failed. One account is frozen." << endl;
        return false;
    }
    if (amount > balance) {
        cout << "Error: Not enough money in " << userName << "'s wallet." << endl;
        return false;
    }
    
    balance = balance - amount;
    receiver.balance = receiver.balance + amount;
    
    addTransaction("Sent " + to_string(amount) + " to " + receiver.userName);
    receiver.addTransaction("Received " + to_string(amount) + " from " + userName);
    
    return true;
}

void BankAccount::toggleFreeze() {
    isFrozen = !isFrozen;
    if (isFrozen) cout << userName << "'s wallet is now FROZEN." << endl;
    else cout << userName << "'s wallet is now ACTIVE." << endl;
}

void BankAccount::displayDetails() const {
    cout << "--------------------" << endl;
    cout << "User: " << userName << endl;
    cout << "ID: " << walletID << endl;
    cout << "Balance: " << balance << endl;
    cout << "Status: " << (isFrozen ? "Frozen" : "Active") << endl;
}

void BankAccount::displayHistory() const {
    cout << "History for " << userName << ":" << endl;
    for (int i = 0; i < history.size(); i++) {
        cout << "- " << history[i] << endl;
    }
}