#include "FileCounter.h"
#include <iostream>
#include <cctype>

using namespace std;

FileCounter::FileCounter() {
    charCount = 0;
    wordCount = 0;
    lineCount = 0;
}

void FileCounter::processLine(string line) {
    lineCount++;
    charCount += line.length();

    bool inWord = false;
    for (int i = 0; i < line.length(); i++) {
        if (!isspace(line[i])) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
}

void FileCounter::displayResults() {
    cout << "Lines: " << lineCount << endl;
    cout << "Words: " << wordCount << endl;
    cout << "Characters: " << charCount << endl;
}