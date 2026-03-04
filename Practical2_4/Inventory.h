#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>

class Inventory 
{
private:
    long long int itemid;
    double itemprice;
    std::string itemname;
    int itemstock;

public:
    Inventory(long long int pid = 0, double pprice = 0.0, std::string pname = "xyz", int pstock = 0);

    void addanewitem(int currentCount);
    int arrivalofanitem(long long int searchID);
    int sellofanitem(long long int searchID);
    void displayitem();

    long long int getItemID();
};

#endif
