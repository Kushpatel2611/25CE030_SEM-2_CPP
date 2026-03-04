#include "DigitalAccount.h"
#include <iostream>

using namespace std;

DigitalAccount::DigitalAccount() 
{
    accountid = 0;
    accountbalance = 0;
    for(int i = 0; i < 3; i++) last3transactions[i] = 0;
}

void DigitalAccount::createaccount(int currentCount) 
{
    accountid = currentCount + 1;
    cout << "Enter your name: ";
    cin >> accountholdername;
    cout << "Enter balance: ";
    cin >> accountbalance;

    cout << "Account created successfully!" << endl;
    cout << "Assigned account ID: " << accountid << endl;
}

bool DigitalAccount::matchID(long long int inputID) 
{
    return (inputID == accountid);
}

int DigitalAccount::depositmoney(long long int inputID) 
{
    if (matchID(inputID)) 
    {
        double tempamount;
        cout << "Enter amount to be deposited: ";
        cin >> tempamount;
        accountbalance += tempamount;

        last3transactions[0] = last3transactions[1];
        last3transactions[1] = last3transactions[2];
        last3transactions[2] = tempamount;
        cout << "Amount deposited successfully!" << endl;
        return 1;
    }
    return 0;
}

int DigitalAccount::withdrawmoney(long long int inputID) 
{
    if (matchID(inputID)) 
    {
        double tempamount;
        N:
        cout << "Enter amount to be withdrawn: ";
        cin >> tempamount;
        if (tempamount <= accountbalance) 
        {
            accountbalance -= tempamount;
            last3transactions[0] = last3transactions[1];
            last3transactions[1] = last3transactions[2];
            last3transactions[2] = -tempamount;
            cout << "Amount withdrawn successfully!" << endl;
            return 1;
        } 
        else 
        {
            cout << "Insufficient balance, enter a lower amount!" << endl;
            goto N;
        }
    }
    return 0;
}

int DigitalAccount::generatesummary(long long int inputID) 
{
    if (matchID(inputID)) 
    {
        cout << "Account ID: " << accountid << endl;
        cout << "Account holder: " << accountholdername << endl;
        cout << "Balance: " << accountbalance << "\n\n";
        for (int j = 0; j < 3; j++) 
        {
            if (last3transactions[j] > 0) cout << "Deposited: " << last3transactions[j] << endl;
            else if (last3transactions[j] < 0) cout << "Withdrawn: " << last3transactions[j] << endl;
        }
        return 1;
    }
    return 0;
}
