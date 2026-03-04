#include <iostream>
#include <string>
#include "LoanAccount.h"

int main() 
{
    const int MAX_ACCOUNTS = 10;
    LoanAccount bankDatabase[MAX_ACCOUNTS];
    int accountCount = 0;
    int choice;

    do 
    {
        std::cout << "\n--- BANK DATABASE MENU ---";
        std::cout << "\n1. Add New Loan Account";
        std::cout << "\n2. View All Loan Accounts";
        std::cout << "\n3. Search Loan by ID";
        std::cout << "\n4. Exit";
        std::cout << "\nChoice: ";
        std::cin >> choice;

        if (choice == 1)
        {
            if (accountCount < MAX_ACCOUNTS) 
            {
                std::string id, name;
                double amt, rate;
                int months;

                std::cout << "Enter ID: "; std::cin >> id;
                std::cout << "Enter Name: "; std::cin.ignore(); std::getline(std::cin, name);
                std::cout << "Enter Amount: "; std::cin >> amt;
                std::cout << "Enter Rate: "; std::cin >> rate;
                std::cout << "Enter Months: "; std::cin >> months;

                bankDatabase[accountCount]=LoanAccount(id, name, amt, rate, months);
                accountCount++;
                std::cout << "Account added!\n";
            } 
            else 
            {
                std::cout << "Database Full!\n";
            }
        }
        else if (choice == 2) 
        {
            for (int i = 0; i < accountCount; i++) 
            {
                bankDatabase[i].displayDetails();
            }
        }
        else if (choice == 3) 
        {
            std::string searchID;
            bool found = false;
            std::cout << "Enter Loan ID to search: ";
            std::cin >> searchID;

            for (int i = 0; i < accountCount; i++) 
            {
                if (bankDatabase[i].getLoanID() == searchID) 
                {
                    std::cout << "\nMatch Found:";
                    bankDatabase[i].displayDetails();
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                std::cout << "\nNo account found with ID: " << searchID << std::endl;
            }
        }

    } while (choice != 4);

    return 0;
}
