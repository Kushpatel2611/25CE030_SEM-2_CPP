#include "SetProcessor.h"
#include <iostream>
#include <iterator>

using namespace std;

void SetProcessor::run() {
    set<int> uniqueSet;
    int count, temp;

    cout << "How many integers will you enter? ";
    cin >> count;

    cout << "Enter " << count << " integers (including duplicates): " << endl;
    for (int i = 0; i < count; i++) {
        cin >> temp;
        uniqueSet.insert(temp);
    }

    displaySet(uniqueSet);
    convertAndDisplayVector(uniqueSet);
}

void SetProcessor::displaySet(const set<int>& s) {
    cout << "\nUnique elements in set (Iterator Traversal):" << endl;
    for (set<int>::const_iterator it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

void SetProcessor::convertAndDisplayVector(const set<int>& s) {
    vector<int> vec(s.begin(), s.end());

    cout << "Unique elements converted to Vector:" << endl;
    for (int x : vec) {
        cout << x << " ";
    }
    cout << endl;
}