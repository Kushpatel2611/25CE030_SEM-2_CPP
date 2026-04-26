#include "VectorReverser.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void VectorReverser::run() {
    vector<int> vec;
    int n, temp;

    cout << "How many integers do you want to enter? ";
    cin >> n;

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> temp;
        vec.push_back(temp);
    }

    vector<int> vecSTL = vec;
    reverse(vecSTL.begin(), vecSTL.end());
    cout << "\nReversed using std::reverse: ";
    display(vecSTL);

    manualReverse(vec);
    cout << "Reversed using Manual Iterators: ";
    display(vec);
}

void VectorReverser::manualReverse(vector<int>& vec) {
    if (vec.empty()) return;

    vector<int>::iterator start = vec.begin();
    vector<int>::iterator end = vec.end() - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

void VectorReverser::display(const vector<int>& vec) {
    for (vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}