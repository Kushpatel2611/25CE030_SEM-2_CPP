#ifndef STUDENTFORMAT_H
#define STUDENTFORMAT_H

#include <iostream>
#include <string>

class StudentFormat {
private:
    std::string name;
    double marks;
    double fees;

public:
    StudentFormat(std::string n, double m, double f);
    void displayHeader();
    void displayData();
};

std::ostream& currency(std::ostream& os);

#endif