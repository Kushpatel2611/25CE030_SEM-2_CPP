#include <iostream>
#include "Inventory.h"

using namespace std;

int main() 
{
    Inventory item[100];
    int noofitems = 0;  
    long long int tempid; 
    int ch, i;

M:
    cout << "1. Add item\n2. Arrival\n3. Sell\n4. View all\n5. Exit\nChoice: ";
    cin >> ch;

    switch (ch) 
    {
    case 1:
        item[noofitems].addanewitem(noofitems);
        noofitems++;
        goto M;

    case 2:
        cout << "Enter Item ID : ";
        cin >> tempid;
        for (i = 0; i < noofitems; i++) 
        {
            if (item[i].arrivalofanitem(tempid) == 1) 
            {
                cout << "Stock increased.\n";
                break;
            }
        }
        if (i == noofitems) cout << "No item found.\n";
        goto M;

    case 3:
        cout << "Enter Item ID : ";
        cin >> tempid;
        for (i = 0; i < noofitems; i++) 
        {
            if (item[i].sellofanitem(tempid) == 1) break;
        }
        if (i == noofitems) cout << "No item found.\n";
        goto M;

    case 4:
        for (i = 0; i < noofitems; i++) item[i].displayitem();
        goto M;

    case 5:
        cout << "Logging out...\n";
        break;

    default:
        cout << "Invalid choice!\n";
        goto M;
    }
    return 0;
}
