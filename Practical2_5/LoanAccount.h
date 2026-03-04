#ifndef LOANACCOUNT_H
#define LOANACCOUNT_H

#include <string>

class LoanAccount 
{
private:
    std::string loanID;
    std::string applicantName;
    double totalLoanAmount;
    double annualInterestRate;
    int loanTenureMonths;
    double power(double base, int exp);

public:
    LoanAccount();
    LoanAccount(std::string id, std::string name, double amount, double rate, int months);
    double calculateEMI();
    void displayDetails();

    std::string getLoanID();
};

#endif
