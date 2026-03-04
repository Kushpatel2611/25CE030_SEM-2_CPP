#include <iostream>
#include "LoanAccount.h"

double LoanAccount::power(double base, int exp) 
{
    double result = 1.0;
    for (int i = 0; i < exp; i++) 
    {
        result *= base;
    }
    return result;
}

LoanAccount::LoanAccount() 
{
    loanID = "";
    applicantName = "";
    totalLoanAmount = 0.0;
    annualInterestRate = 0.0;
    loanTenureMonths = 0;
}

LoanAccount::LoanAccount(std::string id, std::string name, double amount, double rate, int months) 
{
    loanID = id;
    applicantName = name;
    totalLoanAmount = amount;
    annualInterestRate = rate;
    loanTenureMonths = months;
}

std::string LoanAccount::getLoanID() 
{
    return loanID;
}

double LoanAccount::calculateEMI() 
{
    if (totalLoanAmount <= 0 || annualInterestRate <= 0) return 0.0;
    double R = (annualInterestRate / 100.0) / 12.0;
    double factor = power(1 + R, loanTenureMonths);
    return (totalLoanAmount * R * factor) / (factor - 1);
}

void LoanAccount::displayDetails() 
{
    std::cout << "\nLoan ID: " << loanID;
    std::cout << "\nApplicant: " << applicantName;
    std::cout << "\nPrincipal: " << totalLoanAmount;
    std::cout << "\nEMI: " << calculateEMI() << std::endl;
}
