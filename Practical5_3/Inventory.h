#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>

class Inventory {
private:
    std::string filename;

public:
    Inventory(std::string file);
    void addItem();
    void viewAll();
    void searchItem();
};

#endif