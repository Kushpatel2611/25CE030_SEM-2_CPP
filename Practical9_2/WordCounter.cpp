#include "WordCounter.h"
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

void WordCounter::processSentence() {
    string sentence;
    map<string, int> wordMap;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        
        string cleanWord = "";
        for (char c : word) {
            if (ispunct(c)) continue;
            cleanWord += tolower(c);
        }

        if (!cleanWord.empty()) {
            wordMap[cleanWord]++;
        }
    }

    displayFrequencies(wordMap);
}

void WordCounter::displayFrequencies(const map<string, int>& wordMap) {
    cout << "\nWord Frequency Count:" << endl;
    cout << "---------------------" << endl;
    
    for (map<string, int>::const_iterator it = wordMap.begin(); it != wordMap.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }
}