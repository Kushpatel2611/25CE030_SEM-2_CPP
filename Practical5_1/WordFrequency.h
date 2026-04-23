#ifndef WORDFREQUENCY_H
#define WORDFREQUENCY_H

#include <string>

class WordFrequency {
private:
    std::string words[500];
    int counts[500];
    int size;

    std::string sanitize(std::string s);

public:
    WordFrequency();
    void addWord(std::string rawWord);
    void print();
};

#endif