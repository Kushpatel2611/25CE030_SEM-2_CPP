#include "Inventory.h"
#include <iostream>

using namespace std;

Inventory::Inventory(long long int pid, double pprice, string pname, int pstock) 
{
    itemid = pid;
    itemprice = pprice;
    itemname = pname;
    itemstock = pstock;
}

long long int Inventory::getItemID() 
{
    return itemid;
}

void Inventory::addanewitem(int currentCount) 
{
    cout << "\n\n\n";
    itemid = currentCount + 1;
    cout << "Enter Item Name : ";
    cin >> itemname;
    cout << "Enter Item Price : ";
    cin >> itemprice;
    cout << "Enter Item Stock : ";
    cin >> itemstock;
    cout << "\nItem added with ID : " << itemid << endl;
}

int Inventory::arrivalofanitem(long long int searchID) 
{
    if (searchID == itemid) 
    {
        int tempstock;
        cout << "Enter number of items : ";
        cin >> tempstock;
        itemstock += tempstock;
        cout << "Current stock : " << itemstock << endl;
        return 1;
    }
    return 0;
}

int Inventory::sellofanitem(long long int searchID) 
{
    if (searchID == itemid) 
    {
        if (itemstock != 0) 
        {
            int tempstock;
            N:
            cout << "Enter number of items to sell : ";
            cin >> tempstock;
            if (tempstock <= itemstock) 
            {
                itemstock -= tempstock;
                cout << "Stock corrected. Current stock : " << itemstock << endl;
                return 1;
            } 
            else 
            {
                cout << "Insufficient stock! Try a lower quantity.\n";
                goto N;
            }
        } 
        else 
        {
            cout << "No stock available!\n";
            return 1;
        }
    }
    return 0;
}

void Inventory::displayitem() 
{
    cout << "\nID: " << itemid << " | Name: " << itemname
         << " | Price: " << itemprice << " | Stock: " << itemstock << endl;
}
