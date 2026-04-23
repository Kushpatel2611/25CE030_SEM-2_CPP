#include "WordFrequency.h"
#include <iostream>
#include <cctype>

using namespace std;

WordFrequency::WordFrequency() {
    size = 0;
    for (int i = 0; i < 500; i++) {
        counts[i] = 0;
    }
}

string WordFrequency::sanitize(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (isalnum(s[i])) {
            result += tolower(s[i]);
        }
    }
    return result;
}

void WordFrequency::addWord(string rawWord) {
    string w = sanitize(rawWord);
    if (w == "") return;

    for (int i = 0; i < size; i++) {
        if (words[i] == w) {
            counts[i]++;
            return;
        }
    }

    if (size < 500) {
        words[size] = w;
        counts[size] = 1;
        size++;
    }
}

void WordFrequency::print() {
    cout << "\n--- Word Frequency Table ---\n";
    for (int i = 0; i < size; i++) {
        cout << words[i] << ": " << counts[i] << endl;
    }
}