#include "Account.h"
#include <iostream>

using namespace std;

int main() {
    Account* bank[4];
    
    bank[0] = new Account(101, "Kush", 5000.00);
    bank[1] = new Account(102, "Dhairy", 3000.00);
    bank[2] = new Account(103, "Fenil", 1200.00);
    bank[3] = new Account(104, "Jaimin", 600.00);

    cout << "Total Accounts: " << Account::getTotalAccounts() << "\n" << endl;

    bank[0]->transfer(*bank[1], 1000.00);
    bank[2]->transfer(*bank[3], 800.00);
    
    bank[3]->applyServiceCharge(20.00);

    cout << "\n--- FINAL ACCOUNT SUMMARIES ---" << endl;
    for (int i = 0; i < 4; i++) {
        bank[i]->displaySummary();
    }

    for (int i = 0; i < 4; i++) {
        delete bank[i];
    }

    return 0;
}