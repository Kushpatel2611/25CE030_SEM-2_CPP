#include <iostream>
#include <string>
using namespace std;

class SavingsAccount
{
private:
    string customerName;
    int accountID;
    double balance;
    string transactions[3];   // Mini transaction log (last 3)
    int transactionCount;

    void addTransaction(string entry)
    {
        if (transactionCount < 3)
        {
            transactions[transactionCount] = entry;
            transactionCount++;
        }
        else
        {
            // Shift left to maintain last 3 transactions
            transactions[0] = transactions[1];
            transactions[1] = transactions[2];
            transactions[2] = entry;
        }
    }

public:

    // Default Constructor (Zero balance)
    SavingsAccount()
    {
        customerName = "Default User";
        accountID = 0;
        balance = 0.0;
        transactionCount = 0;
    }

    // Parameterized Constructor
    SavingsAccount(string name, int id, double initialBalance)
    {
        customerName = name;
        accountID = id;

        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;

        transactionCount = 0;
        addTransaction("Account Created");
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            addTransaction("Deposited: " + to_string(amount));
            cout << "Deposit successful.\n";
        }
        else
        {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid withdrawal amount.\n";
        }
        else if (amount > balance)
        {
            cout << "Withdrawal failed! Insufficient balance.\n";
        }
        else
        {
            balance -= amount;
            addTransaction("Withdrawn: " + to_string(amount));
            cout << "Withdrawal successful.\n";
        }
    }

    void applyInterest(double rate)
    {
        if (rate > 0)
        {
            double interest = balance * rate / 100;
            balance += interest;
            addTransaction("Interest Applied");
        }
    }

    string getStatus() const
    {
        if (balance > 0)
            return "Active";
        else
            return "Inactive";
    }

    void display() const
    {
        cout << "\n----- Account Summary -----\n";
        cout << "Customer Name: " << customerName << endl;
        cout << "Account ID: " << accountID << endl;
        cout << "Current Balance: " << balance << endl;
        cout << "Account Status: " << getStatus() << endl;

        cout << "Last Transactions:\n";
        for (int i = 0; i < transactionCount; i++)
        {
            cout << transactions[i] << endl;
        }
    }
};

int main()
{
    // Simulating 3 accounts
    SavingsAccount acc1("Kush Patel", 101, 5000);
    SavingsAccount acc2("Riya Shah", 102, 0);
    SavingsAccount acc3("Amit Joshi", 103, 2000);

    // Account 1 transactions
    acc1.deposit(1000);
    acc1.deposit(500);
    acc1.withdraw(2000);
    acc1.withdraw(10000);   // Invalid withdrawal
    acc1.applyInterest(5);

    // Account 2 transactions
    acc2.deposit(3000);
    acc2.deposit(700);
    acc2.withdraw(1000);
    acc2.withdraw(500);
    acc2.applyInterest(3);

    // Account 3 transactions
    acc3.deposit(1500);
    acc3.deposit(500);
    acc3.withdraw(1000);
    acc3.withdraw(200);
    acc3.applyInterest(4);

    // Display summaries
    acc1.display();
    acc2.display();
    acc3.display();

    return 0;
}
