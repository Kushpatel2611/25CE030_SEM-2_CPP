#include "DataProcessor.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void DataProcessor::start() {
    ifstream file;
    string path;

    while (true) {
        cout << "Enter file name (or 'exit'): ";
        cin >> path;

        if (path == "exit") return;

        file.open(path);
        if (file.is_open()) {
            break; 
        } else {
            cout << "File not found! Please try again." << endl;
        }
    }

    string line;
    double sum = 0;

    while (getline(file, line)) {
        try {
        
            double num = stod(line);
            sum += num;
            cout << "Processed: " << num << endl;
        } 
        catch (...) {
    
            cout << "Skipping corrupted line: " << line << endl;
        }
    }

    cout << "Total Sum: " << sum << endl;
    file.close();
}