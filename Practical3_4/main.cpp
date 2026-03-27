#include <iostream>
#include "ArrayUtils.h"

using namespace std;

void printHeader();

int main() {
    printHeader();

    int intArr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(intArr) / sizeof(intArr[0]);

    cout << "Original: ";
    display(intArr, n);

    cout << "Max: " << findMax(intArr, n) << endl;

    cout << "Leaders: ";
    printLeaders(intArr, n);

    reverseArray(intArr, n);
    cout << "Reversed: ";
    display(intArr, n);

    return 0;
}