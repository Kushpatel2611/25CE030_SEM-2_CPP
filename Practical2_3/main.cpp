#include <iostream>
#include "DigitalAccount.h"

using namespace std;

int main() 
{
    DigitalAccount user[100];
    int noofaccounts = 0; 
    long long int tempid;
    int ch, i;

M:
    cout << "\n1. Create Account.\n2. Deposit Money.\n3. Withdraw Money.\n4. Generate Account Summary.\n5. Exit." << endl;
    cout << "Enter your choice: ";
    cin >> ch;

    switch (ch) 
    {
        case 1:
            user[noofaccounts].createaccount(noofaccounts);
            noofaccounts++;
            goto M;

        case 2:
            cout << "Enter bank account number: ";
            cin >> tempid;
            for (i = 0; i < noofaccounts; i++) 
            {
                if (user[i].depositmoney(tempid)) break;
            }
            if (i == noofaccounts) cout << "Wrong account number." << endl;
            goto M;

        case 3:
            cout << "Enter bank account number: ";
            cin >> tempid;
            for (i = 0; i < noofaccounts; i++) 
            {
                if (user[i].withdrawmoney(tempid)) break;
            }
            if (i == noofaccounts) cout << "Wrong account number." << endl;
            goto M;

        case 4:
            cout << "Enter bank account number: ";
            cin >> tempid;
            for (i = 0; i < noofaccounts; i++) 
            {
                if (user[i].generatesummary(tempid)) break;
            }
            if (i == noofaccounts) cout << "Wrong account number." << endl;
            goto M;

        case 5:
            cout << "Thanks for using our wallet!" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
            goto M;
    }
    return 0;
}
