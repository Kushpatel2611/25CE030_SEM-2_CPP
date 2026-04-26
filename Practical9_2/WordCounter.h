#ifndef WORDCOUNTER_H
#define WORDCOUNTER_H

#include <string>
#include <map>

using namespace std;

class WordCounter {
public:
    void processSentence();
private:
    void displayFrequencies(const map<string, int>& wordMap);
};

#endif