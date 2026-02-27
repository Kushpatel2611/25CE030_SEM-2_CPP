#include "loan_acct.h"

loan_acct::loan_acct()
{
    loan_id = 0;
    acct_holder_name = "Unknown";
    loan_amt = 0;
    interest_rate = 0.0;
    loan_tenure = 0;
    emi = 0;
}

void loan_acct::add_data()
{
    cout << "Enter Loan ID: ";
    cin >> loan_id;

    cout << "Enter Account Holder Name: ";
    cin >> acct_holder_name;

    cout << "Enter Loan Amount: ";
    cin >> loan_amt;

    cout << "Enter Interest Rate (%): ";
    cin >> interest_rate;

    cout << "Enter Loan Tenure (years): ";
    cin >> loan_tenure;

    emi_cal();
}

void loan_acct::emi_cal()
{
    double m_r = (interest_rate / 100) / 12;
    int T = loan_tenure * 12;
    double P = loan_amt;

    emi = (P * m_r * pow(1 + m_r, T)) /
          (pow(1 + m_r, T) - 1);

    cout << "\nMonthly EMI = " << emi << endl;
}

void loan_acct::display_data()
{
    cout << "\n---- LOAN DETAILS ----" << endl;
    cout << "Loan ID: " << loan_id << endl;
    cout << "Account Holder Name: " << acct_holder_name << endl;
    cout << "Interest Rate: " << interest_rate << "%" << endl;
    cout << "Loan Tenure: " << loan_tenure << " years" << endl;
    cout << "EMI: " << emi << endl;
}
