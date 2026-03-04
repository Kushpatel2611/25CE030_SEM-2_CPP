#ifndef DIGITALACCOUNT_H
#define DIGITALACCOUNT_H

#include <string>

class DigitalAccount 
{
private:
    long long int accountid;
    std::string accountholdername;
    double accountbalance;
    double last3transactions[3];

public:
    DigitalAccount();

    void createaccount(int currentCount);
    int depositmoney(long long int inputID);
    int withdrawmoney(long long int inputID);
    int generatesummary(long long int inputID);

    bool matchID(long long int inputID);
};

#endif
