#include <iostream>
#include "Shape.h"
using namespace std;

int main() {
    int n;

    cout << "Enter number of shapes: ";
    cin >> n;

    Shape* dynamicShapes[100];

    for (int i = 0; i < n; i++) {
        int choice;
        cout << "\n1. Rectangle\n2. Circle\nChoose shape: ";
        cin >> choice;

        if (choice == 1) {
            float l, w;
            cout << "Enter length and width: ";
            cin >> l >> w;
            dynamicShapes[i] = new Rectangle(l, w);
        }
        else if (choice == 2) {
            float r;
            cout << "Enter radius: ";
            cin >> r;
            dynamicShapes[i] = new Circle(r);
        }
        else {
            cout << "Invalid choice\n";
            i--;
        }
    }

    cout << "\nAreas (Dynamic Storage):\n";
    for (int i = 0; i < n; i++) {
        cout << "Shape " << i + 1 << " Area = " << dynamicShapes[i]->Area() << endl;
    }

    Shape* staticShapes[2];
    staticShapes[0] = new Rectangle(5, 4);
    staticShapes[1] = new Circle(3);

    cout << "\nAreas (Static Storage):\n";
    for (int i = 0; i < 2; i++) {
        cout << "Shape " << i + 1 << " Area = " << staticShapes[i]->Area() << endl;
    }

    for (int i = 0; i < n; i++) {
        delete dynamicShapes[i];
    }

    for (int i = 0; i < 2; i++) {
        delete staticShapes[i];
    }

    return 0;
}