#include <iostream>
#include <fstream>
#include <string>
#include "FileCounter.h"

using namespace std;

int main() {
    string filename;
    cout << "Enter filename: ";
    cin >> filename;

    ifstream file(filename);

    if (!file) {
        cerr << "File Error!" << endl;
        return 1;
    }

    FileCounter fc;
    string line;

    while (getline(file, line)) {
        fc.processLine(line);
    }

    file.close();
    fc.displayResults();

    return 0;
}