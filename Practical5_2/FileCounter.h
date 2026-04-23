#ifndef FILECOUNTER_H
#define FILECOUNTER_H

#include <string>

class FileCounter {
private:
    int charCount;
    int wordCount;
    int lineCount;

public:
    FileCounter();
    void processLine(std::string line);
    void displayResults();
};

#endif