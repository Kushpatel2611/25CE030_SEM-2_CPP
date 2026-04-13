#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;
    int size;

public:
    DynamicArray() {
        arr = nullptr;
        size = 0;
    }

    ~DynamicArray() {
        delete[] arr;
    }

    void insertEnd(int value) {
        int* newArr = new int[size + 1];

        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }

        newArr[size] = value;

        delete[] arr;
        arr = newArr;
        size++;

        cout << "Element inserted successfully.\n";
    }

    void deleteAt(int index) {
        if (size == 0) {
            cout << "Array is empty.\n";
            return;
        }

        if (index < 0 || index >= size) {
            cout << "Invalid position.\n";
            return;
        }

        int* newArr = new int[size - 1];

        for (int i = 0, j = 0; i < size; i++) {
            if (i != index) {
                newArr[j++] = arr[i];
            }
        }

        delete[] arr;
        arr = newArr;
        size--;

        cout << "Element deleted successfully.\n";
    }

    void display() {
        if (size == 0) {
            cout << "Array is empty.\n";
            return;
        }

        cout << "Current Array: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    DynamicArray da;
    int choice, value, pos;

    do {
        cout << "1. Insert element at end\n";
        cout << "2. Delete element from position\n";
        cout << "3. Display array\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                da.insertEnd(value);
                break;

            case 2:
                cout << "Enter position to delete: ";
                cin >> pos;
                da.deleteAt(pos);
                break;

            case 3:
                da.display();
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
