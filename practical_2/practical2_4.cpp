#include <iostream>
using namespace std;

class Item {
private:
    int itemID;
    string itemName;
    double price;
    int quantity;

public:
    
    Item() {
        itemID = 0;
        itemName = "Unknown";
        price = 0.0;
        quantity = 0;
    }

    
    Item(int id, string name, double p, int qty) {
        itemID = id;
        itemName = name;
        price = p;
        quantity = qty;
    }


    void setItem(int id, string name, double p, int qty) {
        itemID = id;
        itemName = name;
        price = p;
        quantity = qty;
    }

    int getID() const {
        return itemID;
    }

    void increaseStock(int qty) {
        if (qty > 0) {
            quantity += qty;
            cout << "Stock increased successfully.\n";
        } else {
            cout << "Invalid quantity.\n";
        }
    }

    void decreaseStock(int qty) {
        if (qty <= 0) {
            cout << "Invalid quantity.\n";
        }
        else if (qty <= quantity) {
            quantity -= qty;
            cout << "Item sold successfully.\n";
        }
        else {
            cout << "Insufficient stock available.\n";
        }
    }

    void display() const {
        cout << "\n----------------------------";
        cout << "\nItem ID   : " << itemID;
        cout << "\nItem Name : " << itemName;
        cout << "\nPrice     : " << price;
        cout << "\nStock     : " << quantity;
        cout << "\n----------------------------\n";
    }
};

int main() {

    Item items[10];
    int count = 0;
    int choice;

    do {
        cout << "\n====== INVENTORY MENU ======\n";
        cout << "1. Add New Item\n";
        cout << "2. Increase Stock\n";
        cout << "3. Sell Item\n";
        cout << "4. Display All Items\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            if (count >= 10) {
                cout << "Inventory Full! Cannot add more items.\n";
                break;
            }

            int id, qty;
            string name;
            double price;

            cout << "Enter Item ID: ";
            cin >> id;
            cout << "Enter Item Name: ";
            cin >> name;
            cout << "Enter Price: ";
            cin >> price;
            cout << "Enter Quantity: ";
            cin >> qty;

            items[count].setItem(id, name, price, qty);
            count++;

            cout << "Item added successfully.\n";
            break;
        }

        case 2: {
            int id, qty;
            cout << "Enter Item ID: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < count; i++) {
                if (items[i].getID() == id) {
                    cout << "Enter quantity to add: ";
                    cin >> qty;
                    items[i].increaseStock(qty);
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Item not found.\n";

            break;
        }

        case 3: {
            int id, qty;
            cout << "Enter Item ID: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < count; i++) {
                if (items[i].getID() == id) {
                    cout << "Enter quantity to sell: ";
                    cin >> qty;
                    items[i].decreaseStock(qty);
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Item not found.\n";

            break;
        }

        case 4:
            if (count == 0) {
                cout << "No items in inventory.\n";
            } else {
                for (int i = 0; i < count; i++)
                    items[i].display();
            }
            break;

        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
